#include <stdio.h>

void printArrays(int * arraysList[]);

int main() {
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int array3[10] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30};

    printf("Tamanio: %d\n", sizeof(array1) / sizeof(array1[0]));

    int * pointersArray[] = { array1, array2, array3 };

    printArrays(pointersArray);

    return 0;
}

void printArrays(int * arraysList[]) {
    for (int i = 0; i < 3; i++) {
        // size_t arraySize = sizeof(arraysList[i]) / sizeof(arraysList[i][0]);
        // printf("Tamanio: %d\n", sizeof(arraysList[i]));

        for (int j = 0; j < 10; j++) {
            printf("[ %d ] - %d\n", j, arraysList[i][j]);
        }
        
        printf("-----------------\n");
    }
}