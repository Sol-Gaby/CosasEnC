#include<stdio.h>
#include<math.h>

float Mayor(float x, float y);

float main()
{
	float a; 
	float b;
	float c;
	float d;
	float e;
	float f;
	float mayorNum;

	printf("Ingrese seis nueros para ver cual es el mayor de los 6:\n");
	printf("Primer numero real:\n");
	scanf("%f", &a);

	printf("Segundo numero real:\n");
	scanf("%f", &b);

	printf("Tercer numero real:\n");
	scanf("%f", &c);

	printf("Cuarto numero real:\n");
	scanf("%f", &d);

	printf("Quinto numero real:\n");
	scanf("%f", &e);

	printf("Sexto numero real:\n");
	scanf("%f", &f);

	mayorNum = Mayor(Mayor(a, b), Mayor(Mayor(c, d), Mayor(e, f)));

	printf("El mayor numero es: %.2f \n", mayorNum);

	return 0;
}


float Mayor(float x, float y){
	
	return ((x + y) + fabs(x - y)) / 2;
}