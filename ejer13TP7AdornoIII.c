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

	printf("Ingrese la cantidad de numeros que desea cargar:\n\t");
	scanf("%d", &(*num).cant);

	printf("Ingrese numeros ordenados de menor a mayor contenidos entre 1-10, no consecutivos... \n");

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
	
	//ord->a[i] = n;
	//printf("__contenido de ord.a[i]%d\n", ord->a[i]);
	if(num->cant < Max){
		ord->cant = ord->cant + 1;
		printf("valor de ord.cant+1:: %d\n", ord->cant);
		
		printf("Ingrese el numero (1-10) que desea insertar:\n");
		scanf("%d", &n);
		printf("_________________cantidad cargada en el arreglo:%d\n", num->cant);
		printf("_________________cantidad cargada en el arreglo:%d\n", ord->cant);

		if(n>0 && n<=10){
			i=0;
			while(i<=ord->cant){
				printf("\nvalor de ord.[%d] del primer while %d\n",i, ord->a[i]);
				if(n>ord->a[i]){
				i++;					
				}else{
					for(j=ord->cant; j>i; j--){
					ord->a[j] = ord->a[j-1];
				}
				ord->a[i] = n;
				i = ord->cant + 1;
				}
			}

			if(i=ord->cant){
				ord->a[i]=n;
			}

			//j=i+1;
			//ord->a[i]=n;
			printf("\nvalor de ord.[%d] fuera del primer while(tiene que ser igual a n) %d\n",i, ord->a[i]);

			/*while(j<=ord->cant){
				ord->a[j]=num->a[i];
				printf("\nvalor de ord[%d] del segundo while %d\n", i, ord->a[i]);
				j=j+1;
				i=i+1;
			}*/
		}else{
			printf("Numero no valido");
		}
		
	}else {
		printf ("¡¡¡Ya no hay lugar en el arreglo!!!\n");
	}

	for (i=0;i<ord->cant;i++){
		printf("\t\n...[%d]...\n", ord->a[i]);
	}
}