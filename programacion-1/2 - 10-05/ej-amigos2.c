#include <stdio.h>

int main() {
    int num1 = 220, num2 = 284, acumulador1 = 0, acumulador2 = 0;

    for (int i = 1; i < num1; i++) {
        if (((float)(num1 % i) == 0) && (i != num1)) {
            printf("%d es divisible por %d\n", num1, i);
            acumulador1 += i;
        }
    }

    for (int i = 1; i < num2; i++) {
        if (((float)(num2 % i) == 0) && (i != num2)) {
            printf("%d es divisible por %d\n", num2, i);
            acumulador2 += i;
        }
    }

    printf("La suma de los divisores de %d es: %d\n", num1, acumulador1);
    printf("La suma de los divisores de %d es: %d\n", num2, acumulador2);

    return 0;
}