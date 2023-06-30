#include <stdio.h>
#include "./utilities/fns.h"

#define VEC_SIZE 100
#define MIN_RAND 100
#define MAX_RAND 500

void getOddEvenArray(int array[], int length);

int main() {
    int array[VEC_SIZE];

    fillRandArray(array, VEC_SIZE, MAX_RAND, MIN_RAND);
    printArray(array, VEC_SIZE);
    getOddEvenArray(array, VEC_SIZE);

    return 0;
}

void getOddEvenArray(int array[], int length) {
    int oddNumbers = 0, evenNumbers = 0;

    for (int i = 0; i < length; i++) {
        (array[i] % 2) == 0 ? evenNumbers++ : oddNumbers++;
    }

    printf("Cantidad de numeros pares: %d\n", oddNumbers);
    printf("Cantidad de numeros impares: %d\n", evenNumbers);
}