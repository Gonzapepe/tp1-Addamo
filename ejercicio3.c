#include <stdio.h>
#include <stdlib.h>

// 3. Ingresar tres valores enteros, sumarlos e imprimir
// esa suma, se puede sumar de a varios operandos en la misma operaci�n

void ejercicio3() {
	
	int num1, num2, num3;
	printf("Ejercicio 3 \n");
	printf("Por favor, ingrese el primer n�mero: \n");
	scanf("%d", &num1);
	printf("Por favor, ingrese el segundo n�mero: \n");
	scanf("%d", &num2);
	printf("Por favor, ingrese el tercer n�mero: \n");
	scanf("%d", &num3);
	
	printf("La suma de todos los n�meros es: %d", num1 + num2 + num3);	
}


