#include <stdio.h>

float averageCalc(int quantity, int notas[]) {
    int sum = 0;

    for (int i = 0; i < quantity; i++) {
        sum += notas[i];
    }

    return sum / quantity;
}

int main() {
    int notas[] = {1, 2, 3, 4, 5};

    printf("%.2f\n", averageCalc(5, notas));

    return 0;
}