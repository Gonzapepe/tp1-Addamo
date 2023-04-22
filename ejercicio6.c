#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 6. Ingresar los lados de un rectángulo y calcular su diagonal principal,
// superficie y perimetro e imprima los resultados solicitados

void ejercicio6() {
	
	int lado1, lado2, superficie, perimetro;
	float diagonal;
	printf("Ejercicio 6 \n");
	printf("Por favor, ingrese el primer lado del rectangulo: \n");
	scanf("%d", &lado1);
	printf("Por favor, ingrese el segundo lado del rectangulo: \n");
	scanf("%d", &lado2);
	
	superficie = lado1 * lado2;
	perimetro = lado1 * 2 + lado2 * 2;
	diagonal = sqrt(pow(lado1, 2) + pow(lado2, 2));
	
	printf("La diagonal es: %.2f\n", diagonal);	
	printf("El perimetro es: %d\n", perimetro);
	printf("La superficie es: %d\n", superficie);
}
