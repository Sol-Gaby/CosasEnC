#include <stdio.h>
#include <string.h>

#define Max 150

typedef struct
{
	int d [Max];
	int cant;
}TData;

TData datos;

int main(){
	int i;

	printf("Ingrese cantidad de elementos:\n");
	scanf("%d", &datos.cant);

	printf("Ingrese %d numeros\n", datos.cant);

	i = 1;
	while(i <= datos.cant){
		scanf("%d", &datos.d[i]);
		i++;
	}

	i = datos.cant;

	while(i >= 1){
		printf("El elemento en la posicion %d es %d\n", i, datos.d[i]);
		i--;
	}
	return 0;
}