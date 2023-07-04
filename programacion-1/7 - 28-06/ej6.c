// Dado un vector de 50 posiciones, con números al azar entre 100 y 500, se pide que genere otros
// 2 vectores, uno de Pares y otro de impares, y guarde los datos que correspondan en ellos,
// luego mostrarlo usando solo 1 funcióna los tresvectores.
// EVEN = Pares | ODD = Impares

#include <stdio.h>
#include "./utilities/fns.h"

#define VEC_SIZE 10
#define MIN_RAND 100
#define MAX_RAND 500

void showArrays(int array[], int evenArray[], int oddArray[], int length);
void getOddEvenArray(int array[], int evenArray[], int oddArray[], int length);

int main() {
    int array[VEC_SIZE], evenNumbersArray[VEC_SIZE] = { 0 }, oddNumbersArray[VEC_SIZE] = { 0 };

    fillRandArray(array, VEC_SIZE, MAX_RAND, MIN_RAND);
    getOddEvenArray(array, evenNumbersArray, oddNumbersArray, VEC_SIZE);
    showArrays(array, evenNumbersArray, oddNumbersArray, VEC_SIZE);

    return 0;
}

void getOddEvenArray(int array[], int evenArray[], int oddArray[], int length) {
    int evenArrayIndex = 0, oddArrayIndex = 0;

    for (int i = 0; i < length; i++) {
        if ((array[i] % 2) == 0) {
            evenArray[evenArrayIndex] = array[i];
            evenArrayIndex++;
        } else {
            oddArray[oddArrayIndex] = array[i];
            oddArrayIndex++;
        }
    }
}

void showArrays(int array[], int evenArray[], int oddArray[], int length) {
    int * arraysList[] = { array, evenArray, oddArray };

    for (int arrayNumber = 0; arrayNumber < 3; arrayNumber++) {
        int * arrayToPrint = arraysList[arrayNumber];

        for (int i = 0; i < length; i++) {
            if (arrayToPrint[i] != 0) {
                printf("[%d] = %d\n", i, arrayToPrint[i]);
            }
        }

        printf("---------------------\n");
    }
}