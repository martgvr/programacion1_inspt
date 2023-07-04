// Desarrollar un programa que permita determinar las raices de una ecuaci�n de segundo grado
// Pidiendo al usuario los valores del t�rmino independiente, el lineal y el cuadr�tico.

Algoritmo sin_titulo
	Definir a, b, c Como Real;
	Definir raizCuadrada Como Real;
	
	Escribir "Ingresar el valor de a"; 
	Leer a;
	
	Si a <> 0 Entonces
		Escribir "Ingresar el valor de b";
		Leer b;
		
		Escribir "Ingresar el valor de c";
		Leer c;
		
		Si (b ^ 2) - (4 * a * c) > 0 Entonces
			raizCuadrada <- rc((b ^ 2) - (4 * a * c)); // Si es negativo tira error el compilador
			
			Escribir "Raiz 1: " (-b + raizCuadrada) / (2 * a);
			Escribir "Raiz 2: " (-b - raizCuadrada) / (2 * a);
		SiNo
			Escribir "Son raices imaginarias";
		FinSi
	SiNo
		Escribir "a no puede ser 0"
	FinSi
FinAlgoritmo