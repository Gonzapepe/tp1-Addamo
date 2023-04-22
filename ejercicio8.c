#include <stdio.h>
#include <stdlib.h>

//8. Ingresar el valor de la hora y el tiempo trabajado por un operario, calcular su sueldo
//e imprimirlo

void ejercicio8() {
	
	int hora, tiempo;

	printf("Ejercicio 8 \n");
	printf("Por favor, ingrese el valor de la hora: \n");
	scanf("%d", &hora);
	printf("Por favor, ingrese el tiempo trabajado: \n");
	scanf("%d", &tiempo);
	
	
	
	printf("Su sueldo es: %d", hora*tiempo);
}
