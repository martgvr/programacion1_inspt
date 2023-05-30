#include <stdio.h>

int factorial(int number) {
    int sum = number;

    for (int i = (number - 1); i > 0; i--) {
        sum = sum * i;
    }

    return sum;
}

int main() {
    printf("%d\n", factorial(4));

    return 0;
}