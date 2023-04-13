// Desarrollar un programa que me permita determinar después de ingresar tres datos cuál es el mayor.

Algoritmo sin_titulo
	Definir i, largerNumber, inputNumber Como Entero;
	
	Para i = 0 Hasta 2 Hacer
		Escribir "Ingrese un valor entero";
		Leer inputNumber
		
		Si i = 0 Entonces
			largerNumber = inputNumber;
		SiNo
			Si inputNumber > largerNumber Entonces
				largerNumber = inputNumber;
			FinSi
		FinSi
	FinPara
	
	Escribir "Numero mas grande: " largerNumber;
FinAlgoritmo
