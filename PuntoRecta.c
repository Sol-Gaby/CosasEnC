#include<stdio.h>

typedef struct
{
	float x;
	float y;
} Tpunto;
Tpunto punto;

typedef struct
{
	float a;
	float b;
} Trecta;
Trecta recta;

void CargarPunto(Tpunto *p);
void CargarRecta(Trecta *r);
int Pertenece(Tpunto p, Trecta r);

int main(){

	CargarPunto(&punto);
	CargarRecta(&recta);

	if(Pertenece(punto, recta)){
		printf("El punto pertenece a la recta!\n");
	}else{
		printf("El punto no pertenece a la recta...\n");
	}

}

void CargarPunto(Tpunto *p){
	printf("Ingrese la coordenada 'x' del punto a evaluar:\n");
	scanf("%f", &(*p).x);
	printf("Ingrese la coordenada de 'y' del punto a evaluar:\n");
	scanf("%f", &(*p).y);
}

void CargarRecta(Trecta *r){
	printf("Ingrese la pendiente de la recta 'a' (ax+b) de la recta a evaluar:\n");
	scanf("%f", &(*r).a);
	printf("Ingrese la ordenada 'b' (ax+b)al origen de la recta a evaluar:\n");
	scanf("%f", &(*r.b);
}

int Pertenece(Tpunto p, Trecta r){
	return p.y == p.x * r.a + r.b;
}