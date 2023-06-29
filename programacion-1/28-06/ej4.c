// Dados los tiempos de partida y de llegada de un movil (h/m/s) y el valor de la distancia
// recorrida (metros), la computadora muestra el valor de la velocidad media (kmh)

#include <stdio.h>

void askData(int * var, char * string);
int getAverageSpeed(int sHours, int sMins, int sSecs, int eHours, int eMins, int endSeconds);

int main() {
    unsigned int distance;
    unsigned int endHours, endMinutes, endSeconds;
    unsigned int startHours, startMinutes, startSeconds;

    askData(&distance, "la distancia recorrida (metros)");

    askData(&startHours, "las horas de partida (h)");
    askData(&startMinutes, "los minutos de partida (m)");
    askData(&startSeconds, "los segundos de partida (s)");

    askData(&endHours, "las horas de llegada (h)");
    askData(&endMinutes, "los minutos de llegada (m)");
    askData(&endSeconds, "los segundos de llegada (s)");

    printf("usted ingreso: %u\n", startHours);

    return 0;
}

void askData(int * var, char * string) {
    int input;

    do {
        printf("Ingrese %s: ", string);
        scanf("%d", &input);
    } while (input < 0);

    *var = input;
}

int getAverageSpeed(int sHours, int sMins, int sSecs, int eHours, int eMins, int endSeconds) {
    
}