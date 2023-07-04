Algoritmo sin_titulo
	Definir arrayToFill, arraySize Como Entero
	
	arraySize = 20
	Dimension arrayToFill[arraySize]
	
	fillRandArray(arrayToFill, arraySize - 1, 10, 20)
	showArray(arrayToFill, arraySize - 1)
FinAlgoritmo

SubAlgoritmo fillRandArray(array, length, min, max)
	Definir i Como Entero
	
	Para i = 0 Hasta length Con Paso 1 Hacer
		array[i] = azar((max - min) + 1) + min
	FinPara
FinSubAlgoritmo

SubAlgoritmo showArray(array, length)
	definir i Como Entero
	
	Para i = 0 Hasta length Con Paso 1 Hacer
		Escribir "[" i "] - "  array[i]
	FinPara

FinSubAlgoritmo