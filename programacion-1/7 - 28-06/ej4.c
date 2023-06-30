#include <stdio.h>
#include "./utilities/fns.h"

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

int getAverageSpeed(int sHours, int sMins, int sSecs, int eHours, int eMins, int endSeconds) {
    
}