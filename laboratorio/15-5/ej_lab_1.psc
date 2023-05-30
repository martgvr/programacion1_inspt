// Elaborar un programa que dado 2 valores puedan invertir esos valores, solo en el caso que los dos sean pares

Algoritmo sin_titulo
	Definir a, b, c Como Entero
	
	Hacer
		Escribir "Ingrese un valor par (a)"
		Leer a
	Mientras Que (a % 2 <> 0)
	
	Hacer
		Escribir "Ingrese otro valor par (b)"
		Leer b
	Mientras Que (b % 2 <> 0)
	
	c = a
	a = b
	b = c
	
	Escribir "Valor de a: " a
	Escribir "Valor de b: " b
	
	
FinAlgoritmo
