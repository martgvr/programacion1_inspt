// Hacer un programa que calcule el a�o bisiesto de un lote de a�os, donde se pedira a�o inicial y a�o FinAlgoritmo
// a�o final no puede ser menor que a�o inicial
// Calculo bisiesto = si (a�o es divisible por 4) y (a�o no es divisible por 100 o a�o divisible por 400) entonces es un a�o bisiesto

Algoritmo sin_titulo
	Definir initialYear, finalYear, i Como Entero
	Escribir "Calculador de anios bisiestos"
	
	Hacer
		Escribir ""
		Escribir "Ingrese el anio inicial"
		Leer initialYear
		
		Escribir "Ingrese el anio final"
		Leer finalYear
		
		Si (finalYear < initialYear) Entonces
			Escribir "ERROR! El anio inicial debe ser menor que el anio final"
		SiNo
			Escribir ""
			Escribir "Del rango seleccionado:"
			
			Para i <- initialYear Hasta finalYear Con Paso 1 Hacer				
				Si ((i % 4 == 0) & ((i % 100 <> 0) o (i % 400 == 0))) Entonces
					Escribir "El a�o " i " es bisiesto"
				Fin Si
			Fin Para
		FinSi
	Mientras Que (finalYear < initialYear) 
	
FinAlgoritmo
