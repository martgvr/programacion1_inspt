// Desarrollar un programa que permita determinar las raices de una ecuación de segundo grado
// Pidiendo al usuario los valores del término independiente, el lineal y el cuadrático.

Algoritmo sin_titulo
	Definir a, b, c Como Real;
	Definir raizCuadrada Como Real;
	
	Escribir "Ingresar el valor de a"; // 2
	Leer a;
	
	Escribir "Ingresar el valor de b"; // 3
	Leer b;
	
	Escribir "Ingresar el valor de c"; // 1
	Leer c;
	
	Si (b ^ 2) - (4 * a * c) > 0 Entonces
		raizCuadrada <- rc((b ^ 2) - (4 * a * c)); // Si es negativo tira error el compilador
		
		Escribir "Raiz 1: " (-b + raizCuadrada) / (2 * a);
		Escribir "Raiz 2: " (-b - raizCuadrada) / (2 * a);
	SiNo
		Escribir "Son raices imaginarias"
	FinSi
FinAlgoritmo
