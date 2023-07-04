Algoritmo sin_titulo
	Definir arrayToFill, arraySize, flag Como Entero
	Dimension arrayToFill[20]
	
	arraySize = 19
	
	fillRandArray(arrayToFill, arraySize)
	showArray(arrayToFill, arraySize, 5)

	flag = validateValue(10)	
	Escribir "Flag es: " flag
FinAlgoritmo

SubAlgoritmo fillRandArray(array, length)
	definir i Como Entero
	
	Para i = 0 Hasta length Con Paso 1 Hacer
		array[i] = azar(90 - 1 + 1) + 1
	FinPara
FinSubAlgoritmo

SubAlgoritmo showArray(array, length, elementsPerRow)
	definir i Como Entero
	
	Para i = 0 Hasta length Con Paso 1 Hacer
		Si i % elementsPerRow == 0 Entonces
			Escribir ""
		FinSi
		
		Escribir Sin Saltar array[i] " "
	FinPara
	
	Escribir " "
FinSubAlgoritmo

Funcion return = validateValue(n)
	Definir return Como Entero
	return = n
FinFuncion
	