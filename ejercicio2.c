#include <stdio.h>
#include <stdlib.h>

// 2. Ingresar tres valores enteros, imprimir la suma total, 
// s�lo se puede sumar de a dos operandos por vez

void ejercicio2() {
	
	int acumulador, num1, num2, num3;
	
	printf("Por favor, ingrese el primer n�mero: \n");
	scanf("%d", &num1);
	printf("Por favor, ingrese el segundo n�mero: \n");
	scanf("%d", &num2);
	printf("Por favor, ingrese el tercer n�mero: \n");
	scanf("%d", &num3);
	
	acumulador = num1 + num2;
	acumulador = acumulador + num3;
	
	printf("La suma de todos los n�meros es: %d", acumulador);	
}


