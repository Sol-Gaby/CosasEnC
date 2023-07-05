#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Max 10
time_t t; //variable de la funcion random

typedef struct{
	
	int a [Max];
	int cant;
} TData;

int CargarArreglo(TData *num);
//int PedirNum(int n);
void InsertarOrd(int n, TData *num, TData*ord);
int Informar(TData *num);
int Ordenar(TData *num);
void MostrarOrdenada(TData *ord);


int main(){
	TData numero;
	TData ordenado;
	char j;
	int numb;

	CargarArreglo(Ordenar(&numero));
	//Ordenar(&numero);
	Informar(&numero);

	printf("\nDecea agregar un numero a la lista? (s/n):\n\t");
	scanf("%s", &j);
	if(j!='n'){
		//Ordenar(&numero);
		InsertarOrd(numb, &numero, &ordenado);
			
	}else{
		printf("No inserto nada!\n");
	}

	MostrarOrdenada(&ordenado);


}

//aca cree esta accion que me genera numeros aleatorios y los carga en la lista, cuando pasa la accion informar se muestran bien en pantalla

//voy a cambiar a void por int
int CargarArreglo(TData *num){
	int i;

	srand ((unsigned)time(&t)); // establece semilla de funcion random

	printf("Ingrese la cantidad de numeros que decea que se generen:\n\t");
	scanf("%d", &(*num).cant);

	//printf("%d", (*num).cant);
	//system("clear");

	for(i=0; i<=(*num).cant; i++){
		num->a[i] = rand()%9;
	}

	
}

// funcion para informar el arrglo, es solo para ver los numeros

int Informar(TData *num){
	int i;
		
	for(i=1; i<=(*num).cant; i++){

		printf("\nnumero aleatorio %d es:\n\t", i);
		printf("_________\t");
		printf("%d", (*num).a[i]);
		printf("\t_________\n");
	}
}

//hice esta accion para pedir el numero que se decea insertar en la lista final, funciona, pide el numero pero no se si esta muy de mas...

//int PedirNum(int n){
//	
//		printf("Escriba un numero entre el 1 y el 10 para ordenar:\n");
//		scanf("%d", &n);

//	return n;
//}

//esta accion es para ordenar la primera lista (la pre cargada), primero no entra aca el arreglo

int Ordenar(TData *num){
	int i=0;
	int aux;
	//con esto ordeno la lista generada por random

	while(i<=(*num).cant){

		if((*num).a[i]<(*num).a[i++]){
			//(*ord).a[x] = n;
			//(*ord).cant = (*ord).cant+1;
			i++;
			printf("entro al while de insertarOrd if\n");
			printf("se supone que esta lista es ordenada; %d \n\t", (*num).a[i]);
		}else{
			aux = (*num).a[i];
			(*num).a[i] = (*num).a[i+1];
			(*num).a[i+1] = aux;
			i++;
			printf("entro al while de insertarOrd else\n");
			printf("se supone que esta lista es ordenada; %d \n\t", (*num).a[i]);
		}

	}
}

//esta accion es para insertar el numero que ingreso en forma ordenada en la lista ya precargada, pero no odena nada

void InsertarOrd(int n, TData *num, TData*ord){

	int i=0;
	int x=0;
	int aux;

	printf("Escriba un numero entre el 1 y el 10 para ordenar:\n");
	scanf("%d", &n);

	printf("Este es el valor que se supone le pasa Pedir a InsertarO:%d\n", n);
	
	//(*ord).cant = (*ord).cant+1;
	(*ord).a[x] = n;
	printf("el numero asignado al ord.a[x]:%d\n", ord->a[x]);

	while((*ord).cant<=Max && i<=(*num).cant){

		if((*ord).a[x] < (*num).a[i]){

			(*ord).a[x+1] = (*num).a[i];
			i++;
			x++;
			printf("entro al segundo while de insertarOrd if\n");
			printf("%d\n", ord->a[x]);
		}else{
			aux = (*ord).a[x];
			(*ord).a[x] = (*num).a[i];
			(*ord).a[x+1] = aux;

			//(*ord).a[x+1] = (*ord).a[x];
			//(*ord).a[x] = (*num).a[i];
			i++;
			x++;
			printf("entro insertarOrd else del segundo while\n");
			printf("%d\n", ord->a[x]);
		}
	}
	
	
}

void MostrarOrdenada(TData *ord){
	int i;

	printf("La lista de numeros ordenaos es:\n\t");
	for(i=0; i<=(*ord).cant;i++){

		printf("%d", (*ord).a[i]);

	}
}