#include <stdio.h>
#include <stdlib.h>

// 1. Ingresar dos valores enteros, sumarlos e imprimir esta suma

void ejercicio1() {
	
	int num1, num2;
	
	printf("Por favor, ingrese un n�mero: \n");
	scanf("%d", &num1);
	printf("Por favor, ingrese nuevamente un n�mero: \n");
	scanf("%d", &num2);
	
	printf("La suma de ambos n�meros es: %d", num1 + num2);	
}


