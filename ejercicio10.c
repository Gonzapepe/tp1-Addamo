#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//10. Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $ 500
//por mes m�s un plus del 10% del precio sobre cada veh�culo vendido y un valor
//constante de 50 pesos por cada uno de ellos, se ingresa el valor del veh�culo y cuantos
//vehiculos de ese tipo vendi�, calcular su sueldo e imprimirlo

void ejercicio10() {
	
	int plus, valor, cantidad, sueldo;
	const int valorConstanteVehiculo = 50;
	const int liquidacion = 500;
	printf("Ejercicio 10 \n");
	printf("Por favor, ingrese el valor del vehiculo: \n");
	scanf("%d", &valor);
	printf("Por favor, ingrese la cantidad de vehiculos que vendi�: \n");
	scanf("%d", &cantidad);
	
	plus = valor * 0.1;
	sueldo = liquidacion + (cantidad * valorConstanteVehiculo) + (plus * cantidad);
	
	printf("Su sueldo es: %d", sueldo);
}
