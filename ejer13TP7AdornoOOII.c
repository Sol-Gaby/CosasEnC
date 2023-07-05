#include<stdio.h>
#include<stdlib.h>

#define Max 10

typedef struct{
	int a [Max];
	int cant;
}TData;

int CargarPreArray(TData *num);
void InsertarOrd(TData *num, TData *ord);
void Mostrar(TData *num);

int main(){

	TData numero;
	TData ordenado;

	CargarPreArray(&numero);
	InsertarOrd(&numero, &ordenado);
	Mostrar(&ordenado);

}

int CargarPreArray(TData *num){

	int i=1;
	char carga;

	printf("\nIngrese la cantidad de numeros que desea cargar: \n\t");
	scanf("%d", &(*num).cant);

	printf("\n\n___________________________________________________\n");

	printf("\nIngrese numeros ordenados de menor a mayor contenidos entre 1-10, no necesariamente consecutivos... \n");

	while(i<=(*num).cant){

		printf("\n>>Ingrese el numero: \n\t");
		scanf("%d", &(*num).a[i]);
		//printf("---numero cargado: en arreglo[%d] %d\n\n",i, num->a[i]);
		i++;

	}
}

void InsertarOrd(TData *num, TData *ord){

	int i;
	int j;
	int n;

	//printf("valor de num.cant: %d\n", num->cant);

	if(num->cant<Max){
		while(n<=0 || n>10){
			printf("\n\n___________________________________________________\n");
			printf("\nIngrese el numero (1-10) que desea insertar:\n\t");
			scanf("%d", &n);
			//printf("valor de n: %d\n", n);
			printf("\n\n___________________________________________________\n");
		}
			i=0;
			//printf("\nvalor de i comienzo del if %d\n",i);
			ord->cant=(*num).cant+1;
			//printf("_________________cantidad cargada en el arreglo num:%d\n", num->cant);
			//printf("_________________cantidad cargada en el arreglo ord:%d\n", ord->cant);

			if(n>=(*num).a[(*num).cant]){
				ord->a[ord->cant]=n;
				//printf("-valor de ord.[%d] del 1° while %d\n",i, ord->a[ord->cant]);
				while(i<ord->cant){
					ord->a[i] = (*num).a[i];
					//printf("-valor de ord.[%d] del 1° while %d\n",i, ord->a[i]);
					i=i+1;
					//printf("-valor de i dentro del 2° while %d\n",i);
				}
			}else if(n>(*num).a[i]){				
				while(i<=ord->cant && n>(*num).a[i]){
				ord->a[i] = (*num).a[i];
				//printf("-valor de ord.[%d] del 2° while %d\n",i, ord->a[i]);
				i++;
				//printf("-valor de i dentro del 2° while %d\n",i);
				}
				printf("\n\n___________________________________________________\n");
				//printf("valor de i fuera del primer while %d\n",i);

				ord->a[i]=n;
				//printf("\n__valor de ord.[%d] fuera del primer while(tiene que ser igual a n): %d\n",i, ord->a[i]);

				j=i+1;
				//printf("valor de j antes de entrar al segundo while %d\n",j);
				printf("\n\n___________________________________________________\n");
				while(j<=ord->cant){
					//printf("_________________cantidad cargada en el arreglo ord:%d\n", ord->cant);
					ord->a[j]=(*num).a[i];
					//printf("\n--valor de num[%d] del segundo while %d\n",i, num->a[i]);
					//printf("--valor de ord[%d] del segundo while %d\n",j, ord->a[j]);
					j++;
					//printf("--valor de j en 2°while %d\n",j);
					i++;
					//printf("--valor de i en el 2°while %d\n",i);
				}

			}else{
				ord->a[i]=n;
				j=i+1;
				while(j<=ord->cant){
					//printf("_________________cantidad cargada en el arreglo ord:%d\n", ord->cant);
					ord->a[j]=(*num).a[i];
					//printf("\n--valor de num[%d] del segundo while %d\n",i, num->a[i]);
					//printf("--valor de ord[%d] del segundo while %d\n",j, ord->a[j]);
					j++;
					//printf("--valor de j en 2°while %d\n",j);
					i++;
					//printf("--valor de i en el 2°while %d\n",i);
				}
			}
	}
}

void Mostrar(TData *ord){
	int i;
	for (i=1;i<=(*ord).cant;i++){
		printf("  \n...[%d]...\n", ord->a[i]);
	}
		printf("___________________________________________________\n");
}