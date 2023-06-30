// Hacer un programa que valide fechas, para ellos debemos validar los días, los meses y los años
// con lo cual sabremos si la fecha es valida o no para poder operar con ella
// una vez que tengamos la validación de la fecha, se pide establecer cuantos años tiene una persona

#include <stdio.h>
#include <time.h>

int isLeapYear(int year);
int dateValidation(int day, int month, int year);

int main() {
    time_t currentTime = time(NULL);
    struct tm *currentDate = localtime(&currentTime);

    int currentDay = currentDate -> tm_mday;
    int currentMonth = currentDate -> tm_mon + 1;
    int currentYear = currentDate -> tm_year + 1900;

    int birthDay, birthMonth, birthYear;

    printf("Ingrese el dia de nacimiento: ");
    scanf("%d", &birthDay);

    printf("Ingrese el mes de nacimiento: ");
    scanf("%d", &birthMonth);

    printf("Ingrese el anio de nacimiento: ");
    scanf("%d", &birthYear);

    if (dateValidation(birthDay, birthMonth, birthYear)) {
        printf("\nFecha actual: %d / %d / %d\n", currentDay, currentMonth, currentYear);
        printf("Fecha ingresada: %d / %d / %d\n", birthDay, birthMonth, birthYear);

        if (currentYear > birthYear) {
            if (currentMonth > birthMonth) {
                printf("\nEdad actual: %d\n", (currentYear - birthYear));
            } else {
                printf("\nEdad actual: thunar%d\n", (currentYear - birthYear) - 1);
            }
        } else {
            printf("\nERROR! La fecha ingresada es posterior a la fecha actual\n");
        }
    } else {
        printf("\nERROR! La fecha ingresada es incorrecta\n");
    }

    return 0;
}

int isLeapYear(int year) {
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
        return 1;
    } 
    return 0;
}

int dateValidation(int day, int month, int year) {
    int maxDaysAllowed;

    if (year > 0) {
        if ((month > 0) && (month <= 12)) {
            switch (month) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    maxDaysAllowed = 31;
                    break;

                case 2:
                    maxDaysAllowed = isLeapYear(year) ? 29 : 28;
                    break;

                default:
                    maxDaysAllowed = 30;
            }

            if ((day > 0) && (day <= maxDaysAllowed)) {
                return 1;
            }
        }
    }
    return 0;
}
