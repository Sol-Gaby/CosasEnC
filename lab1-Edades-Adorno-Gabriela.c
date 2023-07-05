#include<stdio.h>


void main()
{
	//variable de entrada, correspondiente a la edad que ingrese el usuario
	int edad;

	printf("Ingrese su edad a continuacion:");
	scanf("%d", &edad);

	if(edad >= 0 && edad <=11){
		printf("El ciudadano es niñ@\n");
	}else if(edad >= 12 && edad <= 17){
		printf("El ciudadano es adolecente\n");
	}else if(edad >= 18 && edad <= 49){
		printf("El ciudadano es adulto\n");
	}else if (edad >= 50 && edad <= 120){
		printf("El ciudadano es adulto mayor\n");
	}else{
		printf("Edad fuera de rango\n");
		//se agrego este mensaje en caso que el usuario ingrese un numero negativo o muy alto para ser una edad de persona
	}

}