 #include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>
#include <math.h>

void main()
{
	int n;
	int aux;
	
	bool esPrimo;

	printf("introducir el numero a evaluar si es primo o no:\n");
	scanf("%d", &n);

	if (n > 1){
		
			float raiz = sqrt(n);
			int aux = 0;
			do{
				if(n % (int)raiz == 0){
					aux++;
					raiz = raiz-1;
				}else{
					raiz = raiz -1;
				}
			}while(raiz <= 1);
		}
		if(aux <= 2){
			esPrimo=true;
		}else{
			esPrimo=false;
		}
		printf("El numero ingresado es primo?: %d (1=verdadero, 0=falso)\n", esPrimo);
	}else{
		printf("numero no valido\n");
	}	

}