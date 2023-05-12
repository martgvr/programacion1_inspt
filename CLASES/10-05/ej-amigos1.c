#include <stdio.h>

int divisores(int num) {
    int acumulador = 0;

    for (int i = 1; i < num; i++) {
        if (((float)(num % i) == 0) && (i != num)) {
            acumulador += i;
        }
    }

    return acumulador;
}

int main() {
    int num1 = 220, num2 = 284, num;

    for (int k = 0; k < 2; k++) {
        num = (k == 0) ? num1 : num2;
        printf("La suma de los divisores de %d es: %d\n", num, divisores(num));
    }

    return 0;
}