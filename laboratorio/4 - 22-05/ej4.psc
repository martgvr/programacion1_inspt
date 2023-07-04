// Realizar un programa que ingrese 3 lotes de 5 numeros
// Determine el mayor de cada lote / determine el promedio de los mayores de cada lote

Algoritmo ej4
	Definir mayorLote, sumaMayores, input, i, j Como Entero
	
	sumaMayores = 0
	
	Para i <- 1 Hasta 3 Con Paso 1 Hacer
		Escribir ""
		
		Para j <- 1 Hasta 5 Con Paso 1 Hacer
			Escribir "Ingrese el numero " j "/5: "
			Leer input
			
			Si (j == 1) Entonces
				mayorLote = input
			SiNo
				Si (input > mayorLote) Entonces
					mayorLote = input
				FinSi
			FinSi
			
			Si (j == 5) Entonces
				sumaMayores = sumaMayores + mayorLote
			FinSi
		Fin Para
		
		Escribir ""
		Escribir "Mayor ingresado en el lote " i ": " mayorLote
	Fin Para
	
	Escribir ""
	Escribir "Suma de mayores de cada lote: " sumaMayores
	
FinAlgoritmo
