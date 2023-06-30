#include <stdio.h>
#include <time.h>

#define VEC_SIZE 50

int getMaxArray(int array[], int length);
void fillRandArray(int array[], int length);

int main() {
    int array[VEC_SIZE] = {0}, i = 0;
    srand(time(NULL));

    fillRandArray(array, VEC_SIZE);
    for (i = 0; i < VEC_SIZE; i++) printf("[%d] = %d\n", i, array[i]);
    printf("\nEl mayor se repite: %d veces.\n", getMaxArray(array, VEC_SIZE));

    return 0;
}

int getMaxArray(int array[], int length) {
    int highest = 0, timesRepeated = 0, i;

    for (i = 0; i < length; i++) {
        if (i == 0) {
            highest = array[i];
        } else {
            if (array[i] > highest) {
                highest = array[i];
            }
        }
    }

    for (i = 0; i < length; i++) {
        if (array[i] == highest) {
            timesRepeated++;
        }
    }
    
    return timesRepeated;
}

void fillRandArray(int array[], int length) {
    int i = 0;
    
    for (i = 0; i < length; i++) {
        array[i] = rand() % 10 + 11;
    }
}