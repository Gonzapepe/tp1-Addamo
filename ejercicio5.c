#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 5. Ingresar dos lados de un triángulo rectángulo y calcular,
// la hipotenusa, el perímetro, la superficie e imprima los resultados solicitados

void ejercicio5() {
	
	float lado1, lado2, hipotenusa, perimetro, superficie;
	printf("Ejercicio 5 \n");
	printf("Por favor, ingrese el primer lado del triangulo rectangulo: \n");
	scanf("%f", &lado1);
	printf("Por favor, ingrese el segundo lado del triangulo rectangulo: \n");
	scanf("%f", &lado2);
	
	hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
	perimetro = lado1 + lado2 + hipotenusa;
	superficie = (lado1 * lado2) / 2;
	
	printf("La hipotenusa es: %.2f\n", hipotenusa);	
	printf("El perimetro es: %.2f\n", perimetro);
	printf("La superficie es: %.2f\n", superficie);
}

