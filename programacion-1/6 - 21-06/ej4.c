#include <stdio.h>
#define VEC_SIZE 100

void getMaxMinArray(int array[], int length, int * varMaxNumber, int * varMinNumber);
void fillRandArray(int array[], int length) ;
void printArray(int array[], int length);
void getMaxPositions(int array[], int length, int number);

int main() {
    int array[VEC_SIZE];
    int maxNumber = 0, minNumber = 0;

    srand(time(NULL));

    fillRandArray(array, VEC_SIZE);
    printArray(array, VEC_SIZE);
    getMaxMinArray(array, VEC_SIZE, &maxNumber, &minNumber);
    getMaxPositions(array, VEC_SIZE, maxNumber);

    printf("Numero mas chico: %d\n", minNumber);
    printf("Numero mas grande: %d\n", maxNumber);

    return 0;
}


void getMaxMinArray(int array[], int length, int * varMaxNumber, int * varMinNumber) {
    int maxNumber = 0, minNumber = 0;

    for (int i = 0; i < length; i++) {
        if (i == 0) {
            maxNumber = array[i];
            minNumber = array[i];
        }

        if (array[i] > maxNumber) maxNumber = array[i];
        if (array[i] < minNumber) minNumber = array[i];
    }

    *varMaxNumber = maxNumber;
    *varMinNumber = minNumber;
}

void fillRandArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        array[i] = rand() % 41 + 10;
    }
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("[%d] = %d\n", i, array[i]);
    }
}

void getMaxPositions(int array[], int length, int number) {
    printf("El numero %d se encuentra en las posiciones: ", number);
    
    for (int i = 0; i < length; i++) {
        if (array[i] == number) printf("%d ", i);
    }

    printf("\n");
}