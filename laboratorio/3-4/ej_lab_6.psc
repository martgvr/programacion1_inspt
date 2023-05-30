// Desarrollar un programa que me permita determinar cuando ingreso un numero de 2 cifras, 
// poder informar quien es la unidad y quien la decena.

Algoritmo sin_titulo
	Definir num, decenas Como Entero;
	
	Escribir "Ingrese un numero entero de 2 cifras";
	Leer num;
	
	Si ((num <= 99) & (num >= -99)) Entonces
		Escribir "Decenas: " num / 10;
		Escribir "Unidades: " num % 10;
	SiNo 
		Escribir "ERROR! Solo se permiten numeros de 2 cifras";
	FinSi
FinAlgoritmo
