#include <stdio.h>

void showBulbs(int bulb1, int bulb2, int bulb3) {
    system("clear");

    printf(bulb1 == 0 ? "[ ]\t" : "[X]\t");
    printf(bulb2 == 0 ? "[ ]\t" : "[X]\t");
    printf(bulb3 == 0 ? "[ ]\n" : "[X]\n");
    
    printf(" 1\t 2\t 3\n\n");
}

int main() {
    int input, bulb1State = 0, bulb2State = 0, bulb3State = 0;

    showBulbs(bulb1State, bulb2State, bulb3State);

    do {
        printf("Ingrese el interruptor que desea encender (1, 2, 3)\nO ingrese 0 para finalizar: ");
        scanf("%d", &input);

        if ((input > 0) && (input < 4)) {
            if (input == 1) {
                if (bulb1State == 1) {
                    bulb1State = 0;
                } else {
                    bulb1State = 1;
                }
            }

            if (input == 2) {
                if (bulb2State == 1) {
                    bulb2State = 0;
                } else {
                    bulb2State = 1;
                }
            }

            if (input == 3) {
                if (bulb3State == 1) {
                    bulb3State = 0;
                } else {
                    bulb3State = 1;
                }
            }

            showBulbs(bulb1State, bulb2State, bulb3State);
        } else {
            showBulbs(bulb1State, bulb2State, bulb3State);
            printf("ERROR! Solo se permiten los numeros 1, 2 y 3\n");
        }
    } while (input != 0);

    return 0;
}