 #include <stdio.h>
#include <stdbool.h>
#include <math.h>

void main()
{
	int n;
	int aux;
	float raiz;
	bool esPrimo;

	printf("introducir el numero a evaluar si es primo o no:\n");
	scanf("%d", &n);

	if (n > 1){
		raiz = sqrt(n);
		raiz = (int)raiz % 1;
		int aux = 0;
		do{
			if(n % (int)raiz == 0){
				aux++;
				raiz = raiz-1;
			}
			else {
				raiz = raiz -1;
			}
		}while(raiz <= 1);

		if(aux > 2){
			esPrimo=false;
		}
		else {
			esPrimo = true;
		}
		printf("El numero ingresado es primo?: %d (1=verdadero, 0=falso)", esPrimo);
	}else{
		printf("numero no valido");
	}
}