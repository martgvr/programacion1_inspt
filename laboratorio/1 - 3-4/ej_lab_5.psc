// Desarrollar un programa que me permita determinar si un numero es multiplo de otro.

Algoritmo sin_titulo
	Definir num1, num2 Como Entero;
	
	Escribir "Ingrese 2 valores enteros";
	Leer num1, num2;
	
	Si (num1 % num2 == 0) Entonces
		Escribir num1 " es multiplo de " num2;
	SiNo
		Escribir num1 " NO es multiplo de " num2;
	FinSi
FinAlgoritmo
