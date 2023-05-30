#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getMax(int *array, int quantity) {
    int max = 0;

    for (int i = 0; i < quantity; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int getAverage(int *array, int quantity) {
    int sum = 0;

    for (int i = 0; i < quantity; i++) {
        sum += array[i];
    }

    return sum / quantity;
}

void showArray(int *array, int quantity) {
    for (int i = 0; i < quantity; i++) {
        printf("[%d] = %d\n", i, array[i]);
    }
    
    printf("\n");
}

int main() {
    int nums[100], quantity = 0;
    srand(time(NULL));

    do {
        printf("Cuantos numeros desea generar? ");
        scanf("%d", &quantity);

        if (quantity < 0) {
            printf("ERROR! Solo se permiten numeros positivos\n");
        }
    } while (quantity < 0);

    for (int i = 0; i < quantity; i++) {
        nums[i] = (rand() % 100) + 50;
    }

    showArray(nums, quantity);

    printf("Maximo generado: %d\n", getMax(nums, quantity));
    printf("Promedio: %d\n", getAverage(nums, quantity));

    return 0;
}