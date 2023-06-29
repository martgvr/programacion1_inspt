// Dado un vector de 100 posiciones, determinar cuantos de los datos ingresados son numeros
// pares e impares y determine cual de ellos fue mayor. La carga será con numeros
// aleatorios entre 100 y 500

#include <stdio.h>

#define VEC_SIZE 100
#define MIN_RAND 100
#define MAX_RAND 500

void printArray(int array[], int length);
void fillRandArray(int array[], int length);
void getOddEvenArray(int array[], int length);

int main() {
    int array[VEC_SIZE];
    srand(time(NULL));

    fillRandArray(array, VEC_SIZE);
    printArray(array, VEC_SIZE);
    getOddEvenArray(array, VEC_SIZE);

    return 0;
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("[%d] = %d\n", i, array[i]);
    }
}

void fillRandArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        array[i] = (rand() % (MAX_RAND - MIN_RAND)) + MIN_RAND;
    }
}

void getOddEvenArray(int array[], int length) {
    int oddNumbers = 0, evenNumbers = 0;

    for (int i = 0; i < length; i++) {
        (array[i] % 2) == 0 ? evenNumbers++ : oddNumbers++;
    }

    printf("Cantidad de numeros pares: %d\n", oddNumbers);
    printf("Cantidad de numeros impares: %d\n", evenNumbers);
}