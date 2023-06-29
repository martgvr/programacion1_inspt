#include <stdio.h>
#define VEC_SIZE 3

int getSumArray(int array[], int length);
int getAverageArray(int array[], int length);

int main() {
    int array[VEC_SIZE] = {10, 20, 30};

    printf("La suma de los elementos del array es: %d\n", getSumArray(array, VEC_SIZE));
    printf("El promedio de los elementos del array es: %d\n", getAverageArray(array, VEC_SIZE));

    return 0;
}

int getSumArray(int array[], int length) {
    int i = 0, sum = 0;
    for (i = 0; i < length; i++) sum += array[i];
    return sum;
}

int getAverageArray(int array[], int length) {
    int i = 0, sum = 0;
    for (i = 0; i < length; i++) sum += array[i];
    return sum / length;
}