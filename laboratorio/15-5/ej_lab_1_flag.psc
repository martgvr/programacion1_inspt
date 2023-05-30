// Elaborar un programa que dado 2 valores puedan invertir esos valores, solo en el caso que los dos sean pares

Algoritmo sin_titulo
	Definir a, b, c, flag Como Entero
	flag = 0
	
	Hacer
		Escribir "Ingrese un valor par (a)"
		Leer a
		
		Escribir "Ingrese otro valor par (b)"
		Leer b
		
		Si ((a % 2 <> 0) o (b % 2 <> 0)) Entonces
			Escribir "ERROR! Solo se permiten dos valores pares"
		SiNo
			flag = 1
		Fin Si
	Mientras Que (flag <> 1)
	
	c = a
	a = b
	b = c
	
	Escribir "Valores intercambiados:"
	Escribir "Valor de a: " a
	Escribir "Valor de b: " b
FinAlgoritmo
