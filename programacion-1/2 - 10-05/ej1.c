// 45 autos, numero y tiempo. Quién llegó primero | tiempo promedio

#include <stdio.h>
#include <time.h>

int main() {
    int randTime, primero = 0, ultimo = 0;
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        randTime = rand() % 50;

        if (i == 0) {
            primero = randTime;
            ultimo = randTime;
        }
        
        printf("Numero de auto: %d | Tiempo: %d\n", i, randTime);
        if (randTime <= primero) { primero = randTime; }
        if (randTime >= ultimo) { ultimo = randTime; }
    }

    printf("Primero: %d\n", primero);
    printf("Ultimo: %d\n", ultimo);

    return 0;
}