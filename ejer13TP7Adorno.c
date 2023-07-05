#include<stdio.h>
#include<stdlib.h>

#define Max 10

typedef struct{
	int a [Max];
	int cant;
}TData;

int CargarPreArray(TData *num);
void InsertarOrd(TData *num, TData *ord);
void Mostrar (TData num);

int main(){

	TData numero;
	TData ordenado;

	CargarPreArray(&numero);
	InsertarOrd(&numero, &ordenado);
	Mostrar (numero);

}

int CargarPreArray(TData *num){

	int i=1;
	char carga;

	printf("Ingrese la cantidad de numeros que decea cargar:\n\t");
	scanf("%d", &num->cant);

	printf("Ingrese numeros ordenados de mayor a menor contenidos entre 1-10, no consecutivos... \n");

	while(i<=num->cant){

		printf("Ingrese el numero:\n");
		scanf("%d", &num->a[i]);
		//printf("---numero cargado:%d\n", num->a[i]);
		i++;

	}
}

void InsertarOrd(TData *num, TData *ord){

	int i;
	int j;
	int x;

	printf("Ingrese el numero (1-10) que desea insertar:\n");
	scanf("%d", &x);
	printf("_________________cantidad cargada en el arreglo:%d\n", (*num).cant);

	i=0;
	j=0;
	ord->cant=num->cant+1;
	// && i<= (*ord).cant && j<=ord->cant && ord->cant<=Max
	printf(">>>lo contenido en el arreglo:%d\n", num->a[i]);
	while(i <= num->cant ){
		if(x<num->a[i]){
			//ord->cant = ord->cant+1;
			ord->a[j] = x;
			ord->a[j+1] = num->a[i];
			printf(">>>lo contenido en el arreglo:%d\n", num->a[i]);
			i++;
			j++;
			printf("indice: %d\n",i);
			printf("__numero cargado en ordenado:%d\n", (*ord).a[i]);
		}/*else{
			//(*ord).cant = ord->cant+1;
			ord->a[i] = (*num).a[i];
			(*ord).a[(*num).cant+1] = x;

			printf("\tElse:lo contenido en el arreglo:%d\n", num->a[i]);
			i++;
			printf("\tElse:indice: %d\n",i);
			printf("\tElse:__numero cargado en ordenado:%d\n", (*ord).a[i]);
		}*/
	}
}

void Mostrar (TData num){
  int i;
  printf ("Los elementos del arreglo son \n,");
  for(i=0; i<num.cant; i++){
    printf ("[%d]", num.a[i]);
     }
     printf("\n>>>>>elementos: %d", num.cant);
}