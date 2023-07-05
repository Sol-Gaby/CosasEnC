#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Max 30

time_t t; //variable de la funcion random

typedef struct{
	int a [Max];
	int cant;
}TData;

TData numeros; //mandar al main

int Sabotear(TData *num);
int Informar(TData *num);

int main(){

	Sabotear(&numeros);
	Informar(&numeros);
}

int Sabotear(TData *num){

	//variable para la iteracion
	int i;

	srand ((unsigned)time(&t)); // establece semilla de funcion random

	printf("Ingrese la cantidad de numeros que decea que se generen:\n\t");
	scanf("%d", &(*num).cant);

	for(i=1; i<= (*num).cant; i++){
		num->a[i] = rand()%1000;
	}

}

int Informar(TData *num){
	int i;
	for(i=1; i<=(*num).cant; i++){

		printf("\nnumero aleatorio %d es:\n\t", i);
		printf("\n%d\n", (*num).a[i]);
		printf("\n____________________________\n");
	}
}