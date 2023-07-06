#include <stdio.h>
#include "./utilities/fns.h"

#define VEC_SIZE 25

typedef unsigned int uint;

// stdint -> uint8_t

char menu();
void pause();

char loadReserve(uint[], uint[]);
char deleteReserved(uint[], uint[]);
char showFreeReserved(uint[], uint[]);

int main() {
    int seatsRow1[VEC_SIZE] = { 0 }, seatsRow2[VEC_SIZE] = { 0 };

    int option = menu();
    printf("%d\n", option);

    return 0;
}

char menu() {
    int option = -1;

    do {
        system("clear");

        printf("Menu de opciones (Reservas)\n");
        printf("\n\t [ 1 ] - Ingresar dato de reserva");
        printf("\n\t [ 2 ] - Dar de baja una reserva");
        printf("\n\t [ 3 ] - Mostrar asientos libres y reservados");
        printf("\n\t [ 4 ] - Salir\n");

        if (option != -1) {
            printf("\n\t ERROR! Solo se permiten opciones entre 1 y 4");
        }

        printf("\n\t Ingrese una opcion: ");

        scanf("%d", &option);

    } while ((option < 1) || (option > 4));

    return option;
}