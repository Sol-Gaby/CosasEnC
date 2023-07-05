#include<stdio.h>
#include<stdlib.h>

#define Max 11

typedef struct{
	int a [Max];
	int cant;
}TData;

int CargarPreArray(TData *ord);
void InsertarOrd(TData *ord);


int main(){

	TData ordenado;

	CargarPreArray(&ordenado);
	InsertarOrd(&ordenado);

}

int CargarPreArray(TData *ord){

	int i=0;
	char carga;

	printf("Ingrese la cantidad de numeros que desea cargar:\n\t");
	scanf("%d", &ord->cant);

	printf("Ingrese numeros ordenados de menor a mayor contenidos entre 1-10, no consecutivos... \n");

	while(i<ord->cant){

		printf("Ingrese el numero:\n");
		scanf("%d", &ord->a[i]);
		i++;

	}
	for (i=0;i<ord->cant;i++){
		printf("\t[%d]\n", ord->a[i]);
	}
}

void InsertarOrd(TData *ord){

	int i;
	int j;
	int n;

	if (ord->cant<Max){
		printf("Ingrese el numero (1-10) que desea insertar:\t");
		scanf("%d", &n);
		i=0;
		ord->cant = ord->cant + 1;
		while (i<ord->cant){
			if (n>ord->a[i]){
				i++;
			} else {
				for (j = ord->cant; j > i; j--){
					ord->a[j] = ord->a[j-1];
				}
				ord->a[i] = n;
				i = ord->cant + 1;
			}
		}
		if (i = ord->cant){
			ord->a[i]=n;
		}
	} else {
		printf ("¡¡¡Ya no hay lugar en el arreglo!!!\n");
	}
	for (i=0;i<ord->cant;i++){
		printf("\t\n...[%d]...\n", ord->a[i]);
	}
}