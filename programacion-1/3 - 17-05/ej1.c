#include <stdio.h>

float averageCalc(int quantity) {
    int sum = 0;
    int input = 0;

    for (int i = 0; i < quantity; i++) {
        do {
            printf("Ingrese la nota numermo %d: ", i + 1);
            scanf("%d", &input);

            if ((input < 0) || (input > 11)) {
                printf("ERROR! Solo se permiten notas entre 1 y 10\n");
            } else {
                sum += input;
            }
        } while ((input < 0) || (input > 11));
    }

    return sum / quantity;
}

int main() {
    float sum = 0, average = 0;

    for (int i = 0; i < 3; i++) {
        sum = 0;

        average = averageCalc(3);
        sum += average;

        printf("\nPromedio del alumno %d: %.2f\n", i + 1, sum);
    }

    printf("\nPromedio de todos los alumnos: %.2f\n", sum);
    return 0;
}