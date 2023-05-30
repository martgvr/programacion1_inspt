// Conversión de temperatura: Escribe un programa que le pida al usuaro si desea
// transformar de Celsius a Fahrenheit o de Fahrenheit a Celsius
// luego pedirá la temperatura correspondiente para su conversión.

Algoritmo sin_titulo
	Definir opt Como Entero;
	Definir tempInput, tempOutput Como Real;
	
	Hacer
		Escribir "Convertir";
		Escribir "1- Celsius a Fahrenheit";
		Escribir "2- Fahrenheit a Celsius";
		Leer opt;
	Hasta Que ((opt > 0) & (opt < 3))
	
	Segun opt Hacer
		1:
			Escribir "Ingrese la temperatura en grados Celsius";
			Leer tempInput;
			Escribir "Resultado: " (1.8 * tempInput) + 32 " °F";
		
		2:
			Escribir "Ingrese la temperatura en grados Fahrenheit";
			Leer tempInput;
			Escribir "Resultado: " (tempInput - 32) / 1.8 " °C";
			
	Fin Segun
FinAlgoritmo
