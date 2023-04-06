#include <stdio.h>

// M3 - Condicional IF

// 1. Desarrolla un algoritmo que le permita leer un valor entero cualquiera N y escribir si dicho número es par o impar.

int main() {
    int num;
    
    printf("Ingrese un numero entero para saber si es par: ");
    scanf("%d", &num);
    
    printf((num % 2) == 0 ? "Verdadero" : "Falso");
    
    return 0;
}

// 2. Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir en la pantalla si dicho número es Positivo, Negativo o 0 (cero).

int main() {
    int num;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    if (num > 0) printf("Es positivo");
    if (num < 0) printf("Es negativo");
    if (num == 0) printf("Es cero");

    return 0;
}

// 3. Desarrolla un algoritmo que le permita leer dos valores (A y B) y que escriba cuál de los dos valores leídos es el mayor.

int main() {
    int mayor, num;

    printf("Ingrese un numero entero: ");
    scanf("%d", &mayor);

    printf("Ingrese otro numero entero: ");
    scanf("%d", &num);

    if (num > mayor) mayor = num;

    printf("El mayor es: %d", mayor);

    return 0;
}

// 4. Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor.

int main() {
    int num1, num2;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num1);

    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);

    printf(num1 % num2 == 0 ? "Son divisibles" : "No son divisibles");

    return 0;
}

// 5. Desarrolla un algoritmo que le permita leer dos valores A y B e indicar si la suma de los dos números es par.

int main() {
    int num1, num2;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num1);

    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);

    printf((num1 + num2) % 2 == 0 ? "La suma de los numeros es par" : "La suma de los numeros NO es par");

    return 0;
}

// 6. Ingresados dos números reales, la computadora muestra su cociente. 
// Si el segundo número es cero, la computadora muestra un mensaje indicando la imposibilidad de la operación.

int main() {
    float num1, num2;

    printf("Ingrese un dividendo real: ");
    scanf("%f", &num1);

    printf("Ingrese un divisor real: ");
    scanf("%f", &num2);

    if (num2 == 0) printf("El divisor no puede ser 0!");
    else printf("Cociente: %.2f", num1 / num2);

    return 0;
}

// 7. Desarrolla un algoritmo que le permita leer tres valores enteros e indique cuál es el mayor.

int main() {
    int num, inputNum, i = 0;

    for (i = 0; i < 3; i++) {
        printf("Ingrese un numero entero: ");
        scanf("%d", &inputNum);

        if (i == 0) num = inputNum;
        if (num < inputNum) num = inputNum;
    }

    printf("Mayor: %d", num);

    return 0;
}

// 8. Desarrolla un algoritmo que le permita leer tres valores A, B y C e indique cuál es valor del centro (análogo al ejercicio 7). 

int main() {
    int num, inputNum, i = 0;

    for (i = 0; i < 3; i++) {
        printf("Ingrese un numero entero: ");
        scanf("%d", &inputNum);

        if (i == 1) num = inputNum;
    }

    printf("Valor del centro: %d", num);

    return 0;
}

// 9. Desarrolla un algoritmo que le permita leer tres valores A, B y C e indicar si uno de los tres divide a los otros dos exactamente.

int main() {
    int num1, num2, num3, test = 0;
    int i = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num1);

    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);

    printf("Ingrese otro numero entero: ");
    scanf("%d", &num3);

    for (i = 0; i <= 2; i++) {
        if (i == 0) test = num1;
        if (i == 1) test = num2;
        if (i == 2) test = num3;

        printf("\nTesteando el numero %d:\n", test);

        if (test != num1) printf((test % num1) == 0 ? "El numero %d es divisible con %d \n" : "", test, num1);
        if (test != num2) printf((test % num2) == 0 ? "El numero %d es divisible con %d \n" : "", test, num2);
        if (test != num3) printf((test % num3) == 0 ? "El numero %d es divisible con %d \n" : "", test, num3);
    }

    return 0;
}

// 16. Escribe un programa que reciba dos números enteros como entrada y escriba
// el mensaje "signos opuestos", si al menos uno de los números ingresados es negativo.

int main() {
    int num1, num2;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num1);

    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);

    if (((num1 < 0) && (num2 >= 0)) || ((num2 < 0) && (num1 >= 0))) printf("Signos opuestos");

    return 0;
}

// 17. Ingresados tres caracteres,la computadora los muestra ordenados alfabéticamente.

int main() {
    char c1, c2, c3;
    char primero, segundo, tercero;

    printf("Ingrese un caracter: ");
    scanf("%c", &c1);
    fflush(stdin);

    printf("Ingrese otro caracter: ");
    scanf("%c", &c2);
    fflush(stdin);

    printf("Ingrese otro caracter: ");
    scanf("%c", &c3);
    fflush(stdin);

    if ((c1 > c2) && (c1 > c3)) {
        primero = c1;

        if (c2 > c3) {
            segundo = c2;
            tercero = c3;
        } else {
            segundo = c3;
            tercero = c2;
        }
    }

    if ((c2 > c1) && (c2 > c3)) {
        primero = c2;

        if (c1 > c3) { 
            segundo = c1;
            tercero = c3;
        } else {
            segundo = c3;
            tercero = c1;
        }
    }

    if ((c3 > c1) && (c3 > c2)) {
        primero = c3;

        if (c2 > c1) {
            segundo = c2;
            tercero = c1;
        } else {
            segundo = c1;
            tercero = c2;
        }
    }

    printf("Primero: %c \n", primero);
    printf("Segundo: %c \n", segundo);
    printf("Tercero: %c \n", tercero);

    return 0;
}
