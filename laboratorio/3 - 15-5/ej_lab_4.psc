// Hacer un programa que calcule el año bisiesto de un lote de años, donde se pedira año inicial y año FinAlgoritmo
// año final no puede ser menor que año inicial
// Calculo bisiesto = si (año es divisible por 4) y (año no es divisible por 100 o año divisible por 400) entonces es un año bisiesto

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
					Escribir "El año " i " es bisiesto"
				Fin Si
			Fin Para
		FinSi
	Mientras Que (finalYear < initialYear) 
	
FinAlgoritmo
