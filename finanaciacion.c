#include<stdio.h>


int main()
{
	int cuotasCant;
	
	char efectivo;

	float efectivoCliente;
	float montoCompra;
	float montoFinanciado;
	float cuotasFinal;

	#define iva 1,5;


	printf("Ingrese el monto de la compra a financiar:\n");
	scanf("%f", &montoCompra);

	printf("Decea pagar una parte en efectivo? (S/N)\n");
	scanf("%c", &efectivo);

	printf("Introduzca el valor a entregar en efectivo: $\n");
	scanf("%f", &efectivoCliente)

	if(efectivo == "S"||"s"){
		montoCompra = montoCompra - efectivoCliente;
		montoFinanciado = (montoCompra * iva);
	}else{
		montoFinanciado = (montoCompra * iva);
	}

	printf("En cuantas cuaotas decea abonar el monto final? (de 1 a 6 cuotas)\n");
	scanf("%d", &cuotasCant);

	if(cuotasCant>=1 && cuotasCant>=6){
		cuotasFinal = montoFinanciado/cuotasCant;
	}else{
		printf("cantidad de cuotas no valida!\n");
	}

	printf("El monto final de $ %f a financiar en %d cuotas es de $ %f por mes \n", montoFinanciado, cuotasCant, cuotasFinal);

	return 0;

}