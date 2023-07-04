// Cálculo de descunto: Escribe un programa que le pida al usuario el precio de n producto
// y un porcentaje de descuento, y muestre el precio original, el porcentaje y el precio
// con el descuento aplicado.

Algoritmo sin_titulo
	Definir porcentaje Como Entero;
	Definir precioInput Como Real;
	
	Hacer
		Escribir "Ingrese el precio";
		Leer precioInput;
	Hasta Que (precioInput > 0)
	
	Hacer
		Escribir "Ingrese el descuento";
		Leer porcentaje;
	Hasta Que ((porcentaje > 0) & (porcentaje <= 100))
	
	Escribir "Precio con descuento: " precioInput - (precioInput * (porcentaje / 100));
FinAlgoritmo
