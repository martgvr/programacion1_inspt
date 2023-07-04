SubAlgoritmo showMenu(cantTenis, cantRugby, cantVoley, cantHockey, cantFutbol)
	Escribir "------------ MENU ------------"
	Escribir ""
	Escribir "1 - Definir Tenis (" cantTenis ")"
	Escribir "2 - Definir Rugby (" cantRugby ")"
	Escribir "3 - Definir Voley (" cantVoley ")"
	Escribir "4 - Definir Hockey (" cantHockey ")"
	Escribir "5 - Definir Futbol (" cantFutbol ")"
	Escribir ""
	Escribir "6 - Calcular porcentajes"
	Escribir ""
	Escribir "------------------------------"
	Escribir ""
FinSubAlgoritmo

Algoritmo sin_titulo
	Definir cantTenis, cantRugby, cantVoley, cantHockey, cantFutbol, totalIngresados Como Entero
	Definir menuInput Como Entero
	
	cantTenis = 0
	cantRugby = 0
	cantVoley = 0
	cantHockey = 0
	cantFutbol = 0
	totalIngresados = 0
	
	Hacer
		showMenu(cantTenis, cantRugby, cantVoley, cantHockey, cantFutbol)
		Escribir "Ingrese la opción deseada"
		Leer menuInput
		
		Si (menuInput < 1) | (menuInput > 6) Entonces
			Borrar Pantalla
			Escribir "ERROR! Solo se permiten valores entre 1 y 6"
			Escribir ""
		SiNo
			Segun menuInput Hacer
				1:
					Escribir "Ingrese los socios que practican Tenis"
					Leer cantTenis
					totalIngresados = totalIngresados + cantTenis
					Borrar Pantalla
				2:
					Escribir "Ingrese los socios que practican Rugby"
					Leer cantRugby
					totalIngresados = totalIngresados + cantRugby
					Borrar Pantalla
				3:
					Escribir "Ingrese los socios que practican Voley"
					Leer cantVoley
					totalIngresados = totalIngresados + cantVoley
					Borrar Pantalla
				4:
					Escribir "Ingrese los socios que practican Hockey"
					Leer cantHockey
					totalIngresados = totalIngresados + cantHockey
					Borrar Pantalla
				5:
					Escribir "Ingrese los socios que practican Futbol"
					Leer cantFutbol
					totalIngresados = totalIngresados + cantFutbol
					Borrar Pantalla
				6:
					Borrar Pantalla
					Escribir "------------ PORCENTAJES ------------"
					Escribir ""
					Escribir "Socios ingresados: " totalIngresados
					Escribir ""
					Escribir "Tenis (" cantTenis ") = " (cantTenis / totalIngresados) * 100 " %"
					Escribir "Rugby (" cantRugby ") = " (cantRugby / totalIngresados) * 100 " %"
					Escribir "Voley (" cantVoley ") = " (cantVoley / totalIngresados) * 100 " %"
					Escribir "Hockey (" cantHockey ") = " (cantHockey / totalIngresados) * 100 " %"
					Escribir "Futbol (" cantFutbol ") = " (cantFutbol / totalIngresados) * 100 " %"
					Escribir ""
					Escribir "------------------------------"
					Escribir ""
				De Otro Modo:
					Escribir "Otro"
			Fin Segun
		FinSi

	Mientras Que (menuInput <> 6) 
FinAlgoritmo
