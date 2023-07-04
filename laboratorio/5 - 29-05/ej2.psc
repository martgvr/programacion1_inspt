Algoritmo sin_titulo
	Definir maxDays, continue Como Entero
	Definir inputMonth, inputDay, inputTemp Como Entero
	Definir highestTemp, highestTempDay, highestTempMonth Como Entero
	
	continue = 1
	highestTempDay = -1
	
	Mientras (continue == 1) Hacer
		Hacer
			Escribir "Ingrese el mes en forma numérica (1 a 12)"
			Leer inputMonth
			
			Si (inputMonth > 0) & (inputMonth <= 12) Entonces
				Segun inputMonth Hacer
					1, 3, 5, 7, 8, 10, 12:
						maxDays = 31
					2:
						maxDays = 28
					De Otro Modo:
						maxDays = 30
				Fin Segun
				
				Hacer
					Escribir "Ingrese el día del mes en forma numérica (1 a " maxDays ")"
					Leer inputDay
					
					Si (inputDay < 1) | (inputDay > maxDays) Entonces
						Escribir "ERROR! Solo se permiten valores entre 1 y " maxDays
						Escribir ""
					SiNo
						
						Escribir "Ingrese la temperatura que se registró ese dia: "
						Leer inputTemp
						
						Si (highestTempDay == -1) Entonces
							highestTemp = inputTemp
							highestTempDay = inputDay
							highestTempMonth = inputMonth
						SiNo
							Si inputTemp > highestTemp Entonces
								highestTemp = inputTemp
								highestTempDay = inputDay
								highestTempMonth = inputMonth
							FinSi
						FinSi
						
					FinSi
				Mientras Que (inputDay < 1) | (inputDay > maxDays)
				
				
			SiNo
				Escribir "ERROR! Solo se permiten valores entre 1 y 12"
				Escribir ""
			FinSi
		Mientras Que (inputMonth <= 0) | (inputMonth > 12)
		
		Escribir ""
		Escribir "Desea continuar ingresando? [1 = SI]"
		Leer continue
	Fin Mientras
	
	Escribir ""
	Escribir "--------------------------------"
	Escribir "Máxima tempeartura: " highestTemp
	Escribir "Día de máxima tempeartura: " highestTempDay
	Escribir "Mes de máxima temperatura: " highestTempMonth
	Escribir "--------------------------------"
FinAlgoritmo
