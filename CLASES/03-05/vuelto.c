#include <stdio.h>

int main() { 
    int vuelto = 2300;
    int i = 0, billete;

    printf("Dar %d de vuelto.\n", vuelto);

    for (i = 7; i > 0; i--) {
        if (i == 7) billete = 1000;
        if (i == 6) billete = 500;
        if (i == 5) billete = 200;
        if (i == 4) billete = 100;
        if (i == 3) billete = 50;
        if (i == 2) billete = 20;
        if (i == 1) billete = 10;

        do {
            if ((vuelto / billete) > 0) {
                vuelto -= billete;
                printf("Uno de %d\n", billete);
            }
        } while(vuelto >= billete);
    }

    printf("Quedan: %d de vuelto\n", vuelto);
    return 0;
}  