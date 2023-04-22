#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//9. Ingresar el tiempo trabajado por un operario y considerando que el valor de la hora
//es de 10 pesos, calcular su sueldo e imprimirlo.

void ejercicio9() {
	
	int hora, tiempo;

	printf("Ejercicio 9 \n");
	printf("Por favor, ingrese el tiempo trabajado: \n");
	scanf("%d", &tiempo);
	
	hora = 10;
	
	printf("Su sueldo es: %d", hora*tiempo);
}
