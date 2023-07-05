#include <stdio.h>

#define Max 200

typedef struct
{
	float a [Max];
	int cant;
	
}TData;
TData misNotas;

float CargarNotas(TData *nota);
float MostrarNotas(TData *nota);
float PromedioNotas(TData *nota, float prom);

int main(){
	float promedio;

	CargarNotas(&misNotas);
	MostrarNotas(&misNotas);
	PromedioNotas(&misNotas, promedio);

}

float CargarNotas(TData *nota){
	int i;

	printf("Ingrese la cantidad de notas que quiere cargar:\n");
	scanf("%d", &(*nota).cant);

	for(i=1;i<=(*nota).cant;i++){
		printf("Ingrese la nota del alumno %d:\n\t", i);
		scanf("%f", &(*nota).a[i]);

	}
}

float MostrarNotas(TData *nota){
	int i;

	for(i=1; i<=(*nota).cant; i++){
		printf("\nLa nota del alumno %d es:\t", i);
		printf("%.2f \n", (*nota).a[i]);	
	}
}

float PromedioNotas(TData *nota, float prom){
	int i;

	for(i=1; i<=(*nota).cant; i++){
		prom = prom + nota->a[i];
	}

	prom = prom / (*nota).cant;

	printf("_____________________________________________\n");
	printf("\n--> El promedio general del curso es:\n\t");
	printf("%.2f \n", prom);
}