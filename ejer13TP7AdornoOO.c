#include<stdio.h>
#include<stdlib.h>

#define Max 10

typedef struct{
	int a [Max];
	int cant;
}TData;

int CargarPreArray(TData *num);
void InsertarOrd(TData *num, TData *ord);

int main(){

	TData numero;
	TData ordenado;

	CargarPreArray(&numero);
	InsertarOrd(&numero, &ordenado);

}

int CargarPreArray(TData *num){

	int i=1;
	char carga;

	printf("Ingrese la cantidad de numeros que decea cargar:\n\t");
	scanf("%d", &(*num).cant);

	printf("Ingrese numeros ordenados de mayor a menor contenidos entre 1-10, no consecutivos... \n");

	while(i<=(*num).cant){

		printf("Ingrese el numero:\n");
		scanf("%d", &(*num).a[i]);
		printf("---numero cargado:%d\n", num->a[i]);
		i++;

	}
}

void InsertarOrd(TData *num, TData *ord){

	int i;
	int j;
	int n;
	int m;
	
	//ord->a[i] = n;
	//printf("__contenido de ord.a[i]%d\n", ord->a[i]);
	if((*num).cant >= 10){
		printf("no hay lugar");
	}else if(num->cant < 10){
		ord->cant =(*num).cant+1;
		printf("valor de ord.cant+1:: %d\n", ord->cant);
		
		printf("Ingrese el numero (1-10) que desea insertar:\n");
		scanf("%d\n", &n);
		printf("%d\n", n);
		printf("_________________cantidad cargada en el arreglo:%d\n", num->cant);

		i=0;

		if(n>0 && n<=10){
			while(i<=ord->cant && n>=num->a[i]){
				ord->a[i] = (*num).a[i];
				printf("\nvalor de ord.[i] del primer while %d\n", ord->a[i]);
				i=i+1;
			}

			j=i+1;
			ord->a[i]=n;
			printf("\nvalor de ord.[i] fuera del primer while(tiene que ser igual a n) %d\n", ord->a[i]);

			while(j<=ord->cant){
				ord->a[j]=num->a[i];
				printf("\nvalor de ord[i] del segundo while %d\n", ord->a[i]);
				j=j+1;
				i=i+1;
			}
		}else{
			printf("Numero");
		}
		
	}
}