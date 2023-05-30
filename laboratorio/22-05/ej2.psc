// Dado las medidas de tres lados, determinar si un triangulo es isóceles, escaleno o equilatero

Algoritmo ej2
	Definir lado1, lado2, lado3, i Como Entero
	
	lado1 = 0
	lado2 = 0
	lado3 = 0
	
	Hacer
		Escribir "Ingrese el lado 1"
		Leer lado1
		
		Si (lado1 <= 0) Entonces
			Escribir "ERROR! El lado ingresado tiene que ser mayor a 0"
			Escribir ""
		FinSi
	Mientras Que (lado1 <= 0)
	
	Hacer
		Escribir "Ingrese el lado 2"
		Leer lado2
		
		Si (lado2 <= 0) Entonces
			Escribir "ERROR! El lado ingresado tiene que ser mayor a 0"
			Escribir ""
		FinSi
	Mientras Que (lado2 <= 0)
	
	Hacer
		Escribir "Ingrese el lado 3"
		Leer lado3
		
		Si (lado3 <= 0) Entonces
			Escribir "ERROR! El lado ingresado tiene que ser mayor a 0"
			Escribir ""
		FinSi
	Mientras Que (lado3 <= 0)
	
	Si (lado1 == lado2) & (lado2 == lado3) Entonces
		Escribir "Equilatero"
	SiNo
		Si ((lado1 == lado2) & (lado2 <> lado3)) o ((lado1 <> lado2) & (lado2 == lado3)) o ((lado1 == lado3) & (lado2 <> lado3)) Entonces
			Escribir "Isoceles"
		SiNo
			Escribir "Escaleno"
		FinSi
	FinSi
FinAlgoritmo
