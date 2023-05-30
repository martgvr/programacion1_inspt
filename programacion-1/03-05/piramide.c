#include <stdio.h>

int main() {
    int input, i, suma = 0;

    printf("Ingrese la cantidad de bloques: ");
    scanf("%d", &input);

    for (i = 1; suma < input; i++) {
        suma += i;
    }

    printf("Resultado final de suma: %d\n", suma);

    if (suma == input) {
        printf("Se puede hacer piramide con %d niveles \n", i - 1);
    } else {
        printf("No se puede armar una piramide\n");
    }

    return 0;
}

// [21] V
// 6 + 5 + 4 + 3 + 2 + 1 = 21

// [15] V
// 5 + 4 + 3 + 2 + 1 = 15

// [12]
// 5 + 4 + 3 + 2 + 1 = 15
 
// [11]
// 4 + 3 + 2 + 1 = 10
// 5 + 4 + 3 + 2 + 1 = 15

// [10] V
// 4 + 3 + 2 + 1 = 10

// [8]
// 4 + 3 + 2 = 9 
// 3 + 2 + 1 = 6

// [6] V
// 3 + 2 + 1 = 6