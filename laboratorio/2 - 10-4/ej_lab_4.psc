// Categorización de edades. Escribe un programa que le pida al usuario su edad
// y le muestre en qué categoria se encuentra.
// Niño: 0 a 12 / Adolescente: 13 a 17 / Adulto: 18 a 59 / Adulto mayor: + de 60

Algoritmo sin_titulo
	Definir edad Como Entero;
	
	Hacer
		Escribir "Ingrese la edad";
		Leer edad;
	Hasta Que (edad > 0)
	
	
	Si (edad <= 12) Entonces
		Escribir "Niño";
	FinSi
	
	Si ((edad >= 13) & (edad <= 17)) Entonces
		Escribir "Adolescente";
	FinSi
	
	Si ((edad >= 18) & (edad <= 59)) Entonces
		Escribir "Adulto";
	FinSi
	
	Si (edad > 60) Entonces
		Escribir "Adulto mayor";
	FinSi
FinAlgoritmo
