// Para conyuge
// Si el individuo tiene conyuge e hijos, al conyuge le corresponde la mitad de la herencia
// Si el individuo tiene conyuge sin hijos, al conyuge le corresponde toda la herencia
// Si el individuo no tiene conyuge, la cantidad es cero

// Para hijos
// Si el individuo tiene conyuge y tiene hijos, a cada hijo corresponde la mitad de la herencia dividida entre hijos
// Si el individuo no tiene conyuge y tiene hijos, a cada hijo le corresponde la herencia dividida entre el numero de hijos
// Si el individuo no tiene hijos la cantidad es cero

Algoritmo sin_titulo
	Definir conyuge, hijos, monto Como Entero
	
	Escribir "Calculadora de herencia v1.0"
	
	Hacer
		Escribir ""
		Escribir "El individuo cuenta con conyuge? "
		Escribir "[ 0 = NO | 1 = SI ]"
		Leer conyuge
		
		Si ((conyuge <> 0) & (conyuge <> 1)) Entonces
			Escribir "[ERROR] Solo se permiten las opciones 0 o 1"
		FinSi
	Mientras Que ((conyuge <> 0) & ((conyuge <> 1)))
	
	Hacer
		Escribir ""
		Escribir "Cuantos hijos tiene el individuo?"
		Leer hijos
		
		Si (hijos < 0) Entonces
			Escribir "[ERROR] La cantidad de hijos no puede ser menor a 0"
		FinSi
	Mientras Que (hijos < 0)
	
	Si ((hijos == 0) & (conyuge == 0)) Entonces
		Escribir ""
		Escribir "Nadie hereda nada"
	SiNo
		Hacer
			Escribir ""
			Escribir "Ingrese el monto a distribuir:"
			Leer monto
			
			Si (monto < 1) Entonces
				Escribir "[ERROR] El monto a distribuir no puede ser menor a 1"
			FinSi
		Mientras Que (monto < 1)
		
		Escribir ""
		
		Si (conyuge == 1) Entonces
			Si (hijos > 0) Entonces
				Escribir "Al conyuge le corresponde: " monto / 2
				Escribir "A cada hijo le corresponde: " ((monto / 2) / hijos)
			SiNo
				Escribir "Al conyuge le corresponde: " monto
			FinSi
		SiNo
			Si (hijos > 0) Entonces
				Escribir "A cada hijo le corresponde: " (monto / hijos)
			SiNo
				Escribir "Nadie hereda nada"
			FinSi
		FinSi
	FinSi
FinAlgoritmo
