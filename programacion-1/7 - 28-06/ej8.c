#include <time.h>
#include <stdio.h>
#include <stdint.h>

#include "./utilities/fns.h"

#define VEC_SIZE 20
#define MIN_RAND 1
#define MAX_RAND 6

typedef unsigned int uint;

void fillRandDiceArray(uint array[], uint length);
void getRepeated(uint numsArray[], uint sumArray[], uint length);

int main() {
    uint array[VEC_SIZE];
    uint sumArray[VEC_SIZE] = {0};
    
    srand(time(NULL));

    fillRandDiceArray(array, VEC_SIZE);
    printArray(array, VEC_SIZE);

    printf("\n-------------------------------------------\n\n");

    getRepeated(array, sumArray, VEC_SIZE);
    printArray(sumArray, (MAX_RAND * 2) + 1);

    return 0;
}

void fillRandDiceArray(uint array[], uint length) {
    unsigned int firstDice, secondDice;

    for (int i = 0; i < length; i++) {
        firstDice = (rand() % MAX_RAND) + 1;
        secondDice = (rand() % MAX_RAND) + 1;
        array[i] = firstDice + secondDice;
    }
}

void getRepeated(uint numsArray[], uint sumArray[], uint length) {
    for (int i = 0; i < VEC_SIZE; i++) {
        sumArray[numsArray[i]] += 1;
    }
}