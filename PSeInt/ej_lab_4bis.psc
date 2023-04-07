// Desarrollar un programa que me permita ingresar 2 numeros y determinar lo siguiente:

// - Si los numeros son ingresados son pares:
// 		- El primer es mayor que el segundo: Realizar una resta
// 		- Si son iguales: Multiplicarlos
// 		- Si el segundo es mayor: Sumarlos

Algoritmo sin_titulo
	Definir num1, num2 Como Entero;
	
	Escribir "Ingrese 2 valores enteros";
	Leer num1, num2;
	
	Si ((num1 % 2 == 0) & (num2 % 2 == 0)) Entonces
		Si (num1 > num2) Entonces
			Escribir num1 - num2
		FinSi
		
		Si (num1 == num2) Entonces
			Escribir num1 * num2
		FinSi
		
		Si (num1 < num2) Entonces
			Escribir num1 + num2
		FinSi
	FinSi
FinAlgoritmo
