// 19. Se ingresa un número de hasta 5 cifras y se indica si es o no capicua

#include <stdio.h>
#include <math.h>

int digitsCounter(int number) {
    int x, i;

    for (i = 0; i < 99; i++) {
        x = pow(10, i);
        if ((number / x) == 0) {
            return i;
        }
    }
}

int main() {
    int num, digits, firstDigit, lastDigit;

    printf("Ingrese un numero entero de hasta 5 cifras: ");
    scanf("%d", &num);

    digits = digitsCounter(num);

    if (digits <= 5) {
        firstDigit = pow(10, digits - 1);
        lastDigit = pow(10, digits - (digits - 1));

        printf("Primera cifra = %d | Ultima cifra = %d\n", num / firstDigit, num % lastDigit);
        printf((num / firstDigit) == (num % lastDigit) ? "El numero es capicua\n" : "El numero NO es capicua\n");
    } else {
        printf("ERROR! Solo se permiten numeros de hasta 5 cifras\n");
    }

    return 0;
}