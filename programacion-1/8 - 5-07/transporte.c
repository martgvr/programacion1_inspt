#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "./utilities/fns.h"

#define VEC_SIZE 5

// 8 bits = [0 - 255] return
uint8_t menu();

// these functions receives a pointer's array and returns a bool [true/false]
bool loadReserve(int * arraysList[], uint8_t qArrays, uint8_t length);
bool deleteReserved(int * arraysList[], uint8_t qArrays, uint8_t length);

void pause();
void showFreeReserved(int * arraysList[], uint8_t qArrays, uint8_t length);

int main() {
    // 32 bits for identity document storage | [0 - 99.999.999] needed
    uint32_t seatsRow1[VEC_SIZE] = { 0, 1, 0, 0, 0 };
    uint32_t seatsRow2[VEC_SIZE] = { 0, 0, 0, 0, 0 };

    int * pointersArray[] = { seatsRow1, seatsRow2 };
    uint8_t option;

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
        printf("\n\t [ 1 ] - Ingresar dato de reserva");
        printf("\n\t [ 2 ] - Dar de baja una reserva");
        printf("\n\t [ 3 ] - Mostrar asientos libres y reservados");
        printf("\n\t [ 4 ] - Salir\n");

        if (option != -1) { printf("\n\t ERROR! Solo se permiten opciones entre 1 y 4"); }

        printf("\n\t Ingrese una opcion: ");

        scanf("%d", &option);
    } while ((option < 1) || (option > 4));

    return option;
}

bool loadReserve(int * arraysList[], uint8_t qArrays, uint8_t length) {
    

    return true;
}

bool deleteReserved(int * arraysList[], uint8_t qArrays, uint8_t length) {


    return true;
}

void pause() {
    printf("Presione Enter para continuar...");
    fflush(stdin);
    while (getchar() != '\n');
}

void showFreeReserved(int * arraysList[], uint8_t qArrays, uint8_t length) {
    for (int i = 0; i < qArrays; i++) {
        printf("- Fila de asientos %d -\n\n", i + 1);
        for (int j = 0; j < length; j++) {
            uint8_t status = arraysList[i][j];
            printf("[ Espacio %d ] - %s\n", j, status == 0 ? "Libre" : "Ocupado");
        }
        printf("\n");
    }
    pause();
}
