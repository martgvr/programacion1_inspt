// Hacer un programa que le pida al usuario 2 numeros y los muestre hasta que los numeros sean iguales, dando por finalizado el ingreso
// Esos numeros ingresados, en el mientras tanto, deberán calcular la suma de ellos y determinar el promedio de todos los ingresos.

Algoritmo sin_titulo
	Definir a, b, suma, contador Como Entero
	
	suma = 0
	contador = 0
	
	Escribir "Ingrese dos numeros iguales para terminar el programa"
	
	Hacer
		Escribir ""
		Escribir "Ingrese un numero"
		Leer a
		
		Escribir "Ingrese otro numero"
		Leer b
		
		Si (a <> b) Entonces
			contador = contador + 1
			suma = suma + (a + b)	
		FinSi
	Mientras Que (a <> b)
	
	Escribir ""
	Escribir "Suma de los numeros ingresados: " suma
	Escribir "Cantidad de numeros ingresados: " contador
	Escribir "Promedio de los numeros ingresados: " suma / contador
FinAlgoritmo
