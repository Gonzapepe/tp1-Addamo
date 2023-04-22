#include <stdio.h>
#include <stdlib.h>

//7. Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
//valor ingresado e imprimir los resultados

void ejercicio7() {
	
	int num1, num2;

	printf("Ejercicio 7 \n");
	printf("Por favor, ingrese el primer numero: \n");
	scanf("%d", &num1);
	printf("Por favor, ingrese el segundo numero: \n");
	scanf("%d", &num2);
	
	
	printf("La suma es: %d\n", num1 + num2);	
	printf("La resta es: %d\n", num1 - num2);
	printf("El producto es: %d\n", num1 * num2);
}
