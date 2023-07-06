#include <stdio.h>
#include "./utilities/fns.h"

#define VEC_SIZE 5

int getLowerArray(int array[], int length);
void sortArray(int inputArray[], int outputArray[], int length);

int main() {
    int orderedArray[VEC_SIZE] = { 0 };
    int unorderedArray[VEC_SIZE] = { 14, 9, 8, 12, 11 };

    sortArray(unorderedArray, orderedArray, VEC_SIZE);
    printArray(orderedArray, VEC_SIZE);

    return 0;
}

int getLowerArray(int array[], int length) {
    int lowestNumber = array[0], lowestPosition = 0;

    // get lowest cycle
    for (int i = 0; i < length; i++) {
        if ((array[i] < lowestNumber) && (array[i] != -1)) {
            lowestNumber = array[i];
            lowestPosition = i;
        }
    }

    // replace found number with -1
    array[lowestPosition] = -1;

    // if -1 is return then no lower number was found
    return lowestNumber;
}

void sortArray(int inputArray[], int outputArray[], int length) {
    for (int i = 0; i < length; i++) {
        outputArray[i] = getLowerArray(inputArray, length);
    }
}