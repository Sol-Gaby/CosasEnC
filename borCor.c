#include<stdio.h>

#define MaxF 20
#define MaxC 20

typedef struct{
	int mat [MaxF] [MaxC];
	int cantF;
	int cantC;
} TData;

void Cargar(TData *k);
void Mostrar(TData *k);
int Bordes(TData *k);

int main()
{
	TData dato;

	Cargar(&dato);
	Mostrar(&dato);

	if(Bordes(&dato)){

		printf("___________________________________________________\n");

		printf("\nLa suma del borde es igual a la del corazon... <3\t\n");

		printf("___________________________________________________\n");

	}else{

		printf("_______________________________________________________\n");

		printf("\nLa suma del borde es distinta a la del corazon! </ /3\t\n");

		printf("_______________________________________________________\n");
	}

	printf("%d", Bordes(&dato));

	return 0;
}

void Cargar(TData *k){
	int i;
	int j;

	printf("Ingrese la cantidad de filas que quiere cargar a continuacion:\n\t");
	scanf("%d", &k->cantF);

	printf("Ingrese la cantidad de columnas que quiere cargar a continuacion:\n\t");
	scanf("%d", &k->cantC);

	for(i=0; i <= k->cantF; i++){
		for(j=0; j<= k->cantC; j++){
			printf("\nIngrese los valores que quiere cargar en la matriz:\n\t");
			printf("\nt[%d,%d]:", i,j);
			scanf("%d", &k->mat[i][j]);
		}
	}
}

void Mostrar(TData *k){
	int i;
	int j;

	printf("\n\t");
	for(i=0; i<= k->cantF; i++){

		for(j=0; j<=k->cantC; j++){

			printf("%*d",4, k->mat[i][j]);

		}

		printf("\n\t");
	}
	printf("\n");
}

int Bordes(TData *k){
	int i;
	int j;
	int sumBor = 0;
	int sumInt = 0;
	int val;

	for(i=0; i<= (*k).cantF; i++){

		for(j=0; j<=(*k).cantC; j++){

			if(i==0 || i==(*k).cantF || j==0 || j==(*k).cantC){

				sumBor = sumBor + (*k).mat[i][j];
				

			}else{

				sumInt = sumInt + (*k).mat[i][j];
				
			}
		}

	}
		//printf("bordes%d\n", sumBor);
		//printf("interior%d\n", sumInt);

	if(sumBor == sumInt){
		return 1;
	}else{
		return 0;
	}
}