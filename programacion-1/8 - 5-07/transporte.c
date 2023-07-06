#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "./utilities/fns.h"

#define VEC_SIZE 5

// 8 bits = [0 - 255] return
uint8_t menu();

void pause();
void loadReserve(int * arraysList[], uint8_t qArrays, uint8_t length);
void deleteReserved(int * arraysList[], uint8_t qArrays, uint8_t length);
void showFreeReserved(int * arraysList[], uint8_t qArrays, uint8_t length);

int main() {
    // 32 bits for identity document storage [0 - 99.999.999] needed
    uint32_t seatsRow1[VEC_SIZE] = { 12345678, 12345678, 0, 0, 0 };
    uint32_t seatsRow2[VEC_SIZE] = { 12345678, 0, 0, 0, 0 };

    int * pointersArray[] = { seatsRow1, seatsRow2 };

    // option will be setted as static to maintain the value
    static uint8_t option;

    do {
        option = menu();

        switch(option) {
            case 1:
                loadReserve(pointersArray, 2, VEC_SIZE);
                break;
            case 2:
                deleteReserved(pointersArray, 2, VEC_SIZE);
                break;
            case 3:
                showFreeReserved(pointersArray, 2, VEC_SIZE);
                break;
            case 4:
                printf("\nGracias por utilizar nuestro sistema de reservas!\n\n");
                break;
        }
    } while (option != 4);

    return 0;
}

uint8_t menu() {
    int option = -1;

    do {
        printf("\nMenu de opciones (Reservas)\n");
        printf("\n\t[ 1 ] - Ingresar dato de reserva");
        printf("\n\t[ 2 ] - Dar de baja una reserva");
        printf("\n\t[ 3 ] - Mostrar asientos libres y reservados");
        printf("\n\t[ 4 ] - Salir\n");

        if (option != -1) { printf("\n\t ERROR! Solo se permiten opciones entre 1 y 4"); }
        
        printf("\n\tIngrese una opcion: ");

        scanf("%d", &option);
    } while ((option < 1) || (option > 4));

    return option;
}

void loadReserve(int * arraysList[], uint8_t qArrays, uint8_t length) {
    uint8_t rowSelected, spaceSelected, input;
    uint32_t dni;

    do {
        printf("\n\t\t> Ingrese el numero de fila de asientos (1 a %d): ", qArrays);
        scanf("%hhu", &rowSelected);
        if ((rowSelected < 0) || (rowSelected > qArrays)) {
            printf("\n\t\tERROR! Solo se permiten numeros entre 1 y %d", qArrays);
        }
    } while ((rowSelected < 0) || (rowSelected > qArrays));

    do {
        printf("\n\t\t> Ingrese el espacio libre en esa fila (1 a %d): ", VEC_SIZE);
        scanf("%hhu", &spaceSelected);
        if ((spaceSelected < 0) || (spaceSelected > VEC_SIZE)) {
            printf("\n\t\tERROR! Solo se permiten numeros entre 1 y %d", VEC_SIZE);
        }
    } while ((spaceSelected < 0) || (spaceSelected > VEC_SIZE));

    if (arraysList[rowSelected - 1][spaceSelected - 1] == 0) {
        printf("\n\t\tEl espacio %d de la fila %d se encuentra disponible.", rowSelected, spaceSelected);
        printf("\n\t\tDesea reservarlo? [1 = SI | 0 = NO]: ");
        scanf("%hhu", &input);
        
        if (input == 1) {
            printf("\n\t\tIngrese su numero de documento: ");
            scanf("%u", &dni);
            arraysList[rowSelected - 1][spaceSelected - 1] = dni;
            printf("\n\t\tReserva realizada con exito!\n");
            pause();
        }
    } else {
        printf("\n\t\tERROR! El espacio %d de la fila %d se encuentra ocupado. \n", rowSelected, spaceSelected);
    }
}

void deleteReserved(int * arraysList[], uint8_t qArrays, uint8_t length) {
    printArray(arraysList[0], VEC_SIZE);
}

void pause() {
    printf("Presione Enter para continuar...");
    fflush(stdin);
    while (getchar() != '\n');
}

void showFreeReserved(int * arraysList[], uint8_t qArrays, uint8_t length) {
    uint8_t status = 0;

    for (int i = 0; i < qArrays; i++) {
        if (i == 0) { printf("\n"); }
        printf("\t> Fila de asientos %d\n\n", i + 1);
        for (int j = 0; j < length; j++) {
            status = arraysList[i][j];
            printf("\t\t[ Espacio %d ] - %s\n", j, status == 0 ? "Libre" : "Ocupado");
        }
        printf("\n");
    }
    pause();
}