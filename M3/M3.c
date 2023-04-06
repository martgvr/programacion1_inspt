// M3 - Condicional IF

// Ejercicio 1

int main() {
    int num;
    
    printf("Ingrese un numero entero para saber si es par: ");
    scanf("%d", &num);
    
    printf((num % 2) == 0 ? "Verdadero" : "Falso");
    
    return 0;
}

// Ejercicio 2

int main() {
    int num;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    if (num > 0) printf("Es positivo");
    if (num < 0) printf("Es negativo");
    if (num == 0) printf("Es cero");

    return 0;
}

// Ejercicio 3

int main() {
    int mayor, num;

    printf("Ingrese un numero entero: ");
    scanf("%d", &mayor);

    printf("Ingrese otro num3ero entero: ");
    scanf("%d", &num);

    if (num > mayor) mayor = num;

    printf("El mayor es: %d", mayor);

    return 0;
}

// Ejercicio 4


