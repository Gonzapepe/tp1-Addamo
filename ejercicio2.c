#include <stdio.h>
#include <stdlib.h>

// 2. Ingresar tres valores enteros, imprimir la suma total, 
// sólo se puede sumar de a dos operandos por vez

void ejercicio2() {
	
	int acumulador, num1, num2, num3;
	
	printf("Por favor, ingrese el primer número: \n");
	scanf("%d", &num1);
	printf("Por favor, ingrese el segundo número: \n");
	scanf("%d", &num2);
	printf("Por favor, ingrese el tercer número: \n");
	scanf("%d", &num3);
	
	acumulador = num1 + num2;
	acumulador = acumulador + num3;
	
	printf("La suma de todos los números es: %d", acumulador);	
}


