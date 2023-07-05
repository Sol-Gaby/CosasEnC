#include<stdio.h>
#include<string.h>

#define Max 81

typedef struct{
	char p [Max];
	int cant;
}TData;

void CargarPalabra(TData *frase);
int EsCapicua(TData frase);


int main(){
	TData palabra;

	CargarPalabra(&palabra);

	if(EsCapicua(palabra)){
		printf("_________________________________________________\n");
		printf("\nLa palabra es capicua o palindroma\n");
		printf("_________________________________________________\n");
	}else{
		printf("_________________________________________________\n");
		printf("\nLa palabra no es palindroma\n");
		printf("_________________________________________________\n");
	}
	
	return 0;
}

void CargarPalabra(TData *frase){
	int i;

	printf("Ingrese la palabra a comprobar si es capicua o no (letra por letra):\n\t");
	scanf("%s", frase->p);

    frase->cant=strlen(frase->p);
    //printf("%d", frase->cant);
}

int EsCapicua(TData frase){
	int i;


	while(i<= ((frase).cant / 2)&&(frase.p[i]==frase.p[frase.cant-1-i])){
		i++;
		//printf("%d \n", frase.p[frase.cant-1+i]);
		//printf("%s \n", frase.p);
	}

	if(i>frase.cant/2){
		//printf("verdadero");
		return 1;
	}else{
		//printf("falso");
		return 0;
	}
}
