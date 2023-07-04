Algoritmo sin_titulo
	Definir vendedor, cantVentas, maxVentas, sumaVentas, montoVenta, i Como Entero
	Definir porcentajeVentas Como Real
	
	maxVentas = 4
	sumaVentas = 0
	porcentajeVentas = 0.05

	Hacer
		Escribir "Ingrese el numero de vendedor (0 = Salir)"
		Leer vendedor
		
		Si (vendedor > 0) Entonces
			Hacer
				Escribir "Cuantas ventas realizó el vendedor? (Máximo: " maxVentas " ventas)" 
				Leer cantVentas
				
				Si ((cantVentas > 0) & (cantVentas <= maxVentas)) Entonces
					Para i <- 1 Hasta cantVentas Con Paso 1 Hacer
						Hacer
							Escribir "Ingrese el monto de la venta N°" i ":"
							Leer montoVenta
							
							Si (montoVenta < 0) Entonces
								Escribir "ERROR! El monto tiene que ser un valor entero positivo"
								Escribir ""
							SiNo
								sumaVentas = sumaVentas + montoVenta
							FinSi
						Mientras Que (montoVenta < 0)
					Fin Para
					
					Escribir ""
					Escribir "--------------------------------"
					Escribir "Monto de ventas: " sumaVentas " $"
					Escribir "Comisión vendedor: " sumaVentas * porcentajeVentas " $"
					Escribir "--------------------------------"
					Escribir ""
				SiNo
					Escribir "ERROR! Solo se permiten cantidad de ventas entre 1 y " maxVentas
					Escribir ""
				FinSi
				
			Mientras Que ((cantVentas < 0) | (cantVentas > maxVentas))
		FinSi
	Mientras Que (vendedor > 0)
FinAlgoritmo
