// Hacer un programa que le pida al usuaro que ingrese 3 numeros sea manual o al azar [1, 2, 3]
// se necesita saber la cantidad de cada uno en forma numerica y porcentual. El fin de ingrso de datos es con un numero igual a cero

Algoritmo ej1
	Definir input Como Entero
	Definir cant1, cant2, cant3, total Como Entero
	
	cant1 = 0
	cant2 = 0
	cant3 = 0
	
	total = 0
	
	Hacer
		Escribir "Ingrese uno de los siguientes numeros: 1, 2 o 3"
		Leer input

		Si ((input <= 0) o (input > 3)) Entonces
			Escribir "El numero ingresado es incorrecto"
		SiNo
			total = total + 1
			
			Si (input == 1) Entonces
				cant1 = cant1 + 1
			FinSi
			
			Si (input == 2) Entonces
				cant2 = cant2 + 1
			FinSi
			
			Si (input == 3) Entonces
				cant3 = cant3 + 1
			FinSi
		FinSi
	Mientras Que (input <> 0)
	
	Escribir "Total de numeros ingresados: " total
	Escribir ""
	Escribir "Numeros 1 ingresados: " cant1 " [ " (((cant1 - total) / total) * 100) + 100 "% ]"
	Escribir "Numeros 2 ingresados: " cant2 " [ " (((cant2 - total) / total) * 100) + 100 "% ]"
	Escribir "Numeros 3 ingresados: " cant3 " [ " (((cant3 - total) / total) * 100) + 100 "% ]"
FinAlgoritmo
