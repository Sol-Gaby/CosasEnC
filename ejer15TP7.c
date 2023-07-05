#include<stdio.h>
#include<string.h>

#define Max 100

typedef struct{
	char nombre [Max];
	int cant;
} TPersonas;


void Insertar(TPersonas *p); //aca por ser accion si va con el asterisco de llamada¡?
void SuprimirPrimer(TPersonas *p);
void CaragarLista(TPersonas *p);
int Vacia(TPersonas p); //a la funcion no va con * creo, volver a preguntar al profe
int Llena(TPersonas p);

int main(){
	int i;

	i=0;

	TPersonas persona;
	if(Vacia(persona)||(Vacia(persona)&& !Llena(persona))){
		while(persona.cant <= Max){
			
			CaragarLista(&persona);

		}
	}
}

void Insertar(TPersonas *p){
	char nom;
	int i;

	for(i=0; i<=p->cant; i++){

	printf("Agregue el nombre de la persona a cargar:\n\t");
	scanf("%s", &nom);

		//p->cant=strlen(p->nombre);
		p->nombre[i] = nom;
		p->cant = p->cant+1;

	}

}

void CaragarLista(TPersonas *p){

	int ca;
	int i;

	printf("Ingrese la cantidada de personas que decea cargar:\n\t");
	scanf("%d", &ca);

	for(i=0; i<= (*p).cant; i++){

		Insertar(p);
	}
}

int Vacia(TPersonas p){
	if(p.cant == 0){
		return 1;
	}else if(p.cant > 0 && p.cant <= Max){
		return 0;
	}
}

int Llena(TPersonas p){
	if(p.cant == Max){
		return 1; 
	}else if(p.cant < Max && p.cant > 0){
		return 0;
	}else if(p.cant = 0){
		return 0;
	}
}