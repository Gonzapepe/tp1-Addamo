#include <stdio.h>
#include <stdlib.h>

// 3. Ingresar tres valores enteros, sumarlos e imprimir
// esa suma, se puede sumar de a varios operandos en la misma operación

void ejercicio4() {
	
	int lado1, lado2, lado3;
	
	printf("Por favor, ingrese el primer lado: \n");
	scanf("%d", &lado1);
	printf("Por favor, ingrese el segundo lado: \n");
	scanf("%d", &lado2);
	printf("Por favor, ingrese el tercer lado: \n");
	scanf("%d", &lado3);
	
	
	
	printf("El perímetro del triangulo es: %d", lado1 + lado2 + lado3);	
}


