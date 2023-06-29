#include <stdio.h>

#define VEC_SIZE 20
#define MIN_RAND 1
#define MAX_RAND 6

void printArray(unsigned int array[], unsigned int length);
void fillRandArray(unsigned int array[], unsigned int length);
void getRepeated(unsigned int numsArray[], unsigned int sumArray[], unsigned int length);

int main() {
    unsigned int array[VEC_SIZE];
    unsigned int sumArray[VEC_SIZE] = {0};
    
    srand(time(NULL));

    fillRandArray(array, VEC_SIZE);
    printArray(array, VEC_SIZE);

    printf("\n-------------------------------------------\n\n");

    getRepeated(array, sumArray, VEC_SIZE);
    printArray(sumArray, (MAX_RAND * 2) + 1);

    return 0;
}

void printArray(unsigned int array[], unsigned int length) {
    for (int i = 0; i < length; i++) {
        printf("[%d] = %d\n", i, array[i]);
    }
}

void fillRandArray(unsigned int array[], unsigned int length) {
    unsigned int firstDice, secondDice;

    for (int i = 0; i < length; i++) {
        firstDice = (rand() % MAX_RAND) + 1;
        secondDice = (rand() % MAX_RAND) + 1;
        array[i] = firstDice + secondDice;
    }
}

void getRepeated(unsigned int numsArray[], unsigned int sumArray[], unsigned int length) {
    for (int i = 0; i < VEC_SIZE; i++) {
        sumArray[numsArray[i]] += 1;
    }
}