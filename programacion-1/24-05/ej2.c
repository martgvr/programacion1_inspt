#include <stdio.h>

int main() {
    int year;
    char month[10];

    printf("Ingrese el nombre del mes: ");
    scanf("%s", month);

    printf("Ingrese el numero de anio: ");
    scanf("%d", &year);

    printf("Ingresado: %s del anio %d\n", month, year);

    return 0;
}

int getDividers(int num) {
    int acumulador = 0;

    for (int i = 1; i <= num; i++) {
        if ((float)(num % i) == 0) {
            acumulador++;
        }
    }

    return acumulador;
}