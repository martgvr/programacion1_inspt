#include <time.h>

void askData(int * var, char * string) {
    int input;

    do {
        printf("Ingrese %s: ", string);
        scanf("%d", &input);
    } while (input < 0);

    *var = input;
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("[ %d ] = %d\n", i, array[i]);
    }
}

void fillRandArray(int array[], int length, int MAX_RAND, int MIN_RAND) {
    srand(time(NULL));
    
    for (int i = 0; i < length; i++) {
        array[i] = (rand() % (MAX_RAND - MIN_RAND)) + MIN_RAND;
    }
}