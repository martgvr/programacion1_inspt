#include <stdio.h>

int main() {
    int num = 6, acumulador = 0;

    for (int i = 1; i < 9; i++) {
        if (((float)(num % i) == 0) && (i != num)) {
            printf("%d es divisible por %d\n", num, i);
            acumulador += i;
        }
    }

    printf("Acumulador: %d\n", acumulador);

    return 0;
}