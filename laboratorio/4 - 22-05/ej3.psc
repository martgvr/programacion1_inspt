// Dado el ingreso de numeros enteros positivos, se pide determinar cuántos de ellos fueron numeros primos y cuantos compuestos
// la carga finaliza con el numero 999

Algoritmo ej3
	Definir input, cantDivisores, cantPrimos, cantCompuestos, i Como Entero
	
	cantCompuestos = 0
	cantPrimos = 0
	
	Hacer
		cantDivisores = 0
		
		Escribir ""
		Escribir "Ingrese un numero"
		Leer input
		
		Si (input <> 999) Entonces
			Para i <- 1 Hasta input Con Paso 1 Hacer
				Si (input % i == 0) Entonces
					Escribir "Divisible por " i
					cantDivisores = cantDivisores + 1
				Fin Si
			Fin Para
			
			Si (cantDivisores == 2) Entonces
				Escribir "El numero ingresado es primo"
				cantPrimos = cantPrimos + 1
			SiNo
				Si (input <> 1) Entonces
					Escribir "El numero ingresado NO es primo, es compuesto"
					cantCompuestos = cantCompuestos + 1
				FinSi
			Fin Si
		FinSi
	Mientras Que (input <> 999)
	
	Escribir "Numeros primos ingresados: " cantPrimos
	Escribir "Numeros compuestos ingresados: " cantCompuestos
FinAlgoritmo