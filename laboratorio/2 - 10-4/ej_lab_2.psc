// Calculo de indice de masa corporal (IMC), Escribe un programa que le pida al usuario su peso (en kg) y su altura (en m),
// y calcule su indice de masa corporal (IMC), el cual se calcula como el peso divido por la altura al cuadrado.
// IMC = peso (kg) / altura2 (m2)
// Switch para mostrar el imc segun el resultado

Algoritmo sin_titulo
	Definir peso, altura, imc Como Real;
	
	Hacer
		Escribir "Ingrese su peso corporal (kg)";
		Leer peso;
	Hasta Que (peso > 0)
	
	Hacer
		Escribir "Ingrese su altura (m)";
		Leer altura;
	Hasta Que (altura > 0)
	
	imc <- (peso / (altura * altura));
	
	Escribir "Su IMC es: " imc
	
	Si (imc < 18.5) Entonces
		Escribir "Peso insuficiente";
	SiNo
		Si (imc <= 24.9) Entonces
			Escribir "Peso normal";
		SiNo
			Si (imc <= 29.9) Entonces
				Escribir "Sobrepeso";
			FinSi
		FinSi
	FinSi
FinAlgoritmo
