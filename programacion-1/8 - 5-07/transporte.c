#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "./utilities/fns.h"

#define VEC_SIZE 10

// 8 bits = [0 - 255] return
uint8_t menu();

void pause();
void loadReserve(int * arraysList[], uint8_t qArrays, uint8_t length);
void deleteReserved(int * arraysList[], uint8_t qArrays, uint8_t length);
void showFreeReserved(int * arraysList[], uint8_t qArrays, uint8_t length);

int main() {
    // 32 bits for identity document storage [0 - 99.999.999] needed
    uint32_t seatsRow1[VEC_SIZE] = { 0, 0, 0, 0, 0 };
    uint32_t seatsRow2[VEC_SIZE] = { 0, 0, 0, 0, 0 };

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

    printf("\nMenu de opciones (Reservas)\n");
    printf("\n\t[ 1 ] - Ingresar dato de reserva");
    printf("\n\t[ 2 ] - Dar de baja una reserva");
    printf("\n\t[ 3 ] - Mostrar asientos libres y reservados");
    printf("\n\t[ 4 ] - Salir\n");

    if (option != -1) { printf("\n\t ERROR! Solo se permiten opciones entre 1 y 4"); }
    
    printf("\n\tIngrese una opcion: ");
    scanf("%d", &option);

    return option;
}

void pause() {
    printf("Presione Enter para continuar...");
    fflush(stdin);
    while (getchar() != '\n');
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
        printf("\n\t\t> Ingrese el espacio libre en esa fila (1 a %d): ", length);
        scanf("%hhu", &spaceSelected);
        if ((spaceSelected < 0) || (spaceSelected > length)) {
            printf("\n\t\tERROR! Solo se permiten numeros entre 1 y %d", length);
        }
    } while ((spaceSelected < 0) || (spaceSelected > length));

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
    int dni, deleteConfirm, rowFound, spaceFound, reserveFound = 0;

    do {
        printf("\n\t\t> Ingrese su numero de documento para cancelar su reserva: ");
        scanf("%d", &dni);

        if (dni < 0) {
            printf("\n\t\tERROR! Solo se permiten numeros enteros positivos.");
            pause();
        }
    } while (dni < 0);

    for (int i = 0; i < qArrays; i++) {
        for (int j = 0; j < length; j++) {
            if (arraysList[i][j] == dni) {
                reserveFound = 1;
                rowFound = i;
                spaceFound = j;
            }
        }
    }

    if (reserveFound == 1) {
        printf("\n\t\tRESERVA ENCONTRADA");
        printf("\n\t\tFila %d / Espacio %d", rowFound + 1, spaceFound + 1);
        printf("\n\t\tDesea continuar con la baja? [1 = SI | 0 = NO]: ");

        scanf("%d", &deleteConfirm);

        if (deleteConfirm == 1) {
            arraysList[rowFound][spaceFound] = 0;
            printf("\n\t\tReserva cancelada con exito!\n");
            pause();
        }
    } else {
        printf("\n\t\tERROR! No existe una reserva con ese numero de documento\n");
        pause();
    }
}

void showFreeReserved(int * arraysList[], uint8_t qArrays, uint8_t length) {
    uint8_t status = 0;

    for (int i = 0; i < qArrays; i++) {
        if (i == 0) { printf("\n"); }
        printf("\t> Fila de asientos %d\n\n", i + 1);
        for (int j = 0; j < length; j++) {
            status = arraysList[i][j];
            printf("\t\t[ Espacio %2d ] - %s\n", j + 1, status == 0 ? "Libre" : "Ocupado");
        }
        printf("\n");
    }
    pause();
}