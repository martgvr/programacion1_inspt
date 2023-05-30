// Dado un lote de numeros ingresados por teclado, se desea saber cual es primo y contabilizarlos
// el fin de lote es ingresando cero

Algoritmo sin_titulo
	Definir input, cantDivisores, cantPrimos, i Como Entero
	
	cantPrimos = 0
	
	Hacer
		cantDivisores = 0
		
		Escribir ""
		Escribir "Ingrese un numero"
		Leer input
		
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
			Escribir "El numero ingresado NO es primo"
		Fin Si
	Mientras Que (input <> 0)
	
	Escribir ""
	Escribir "Se ingresaron " cantPrimos " numeros primos"
FinAlgoritmo
