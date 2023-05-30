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