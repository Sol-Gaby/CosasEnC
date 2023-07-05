#include <stdio.h>

int main(){

	int const precioHora = 10;
	int const precioHoraExtra = 1.5;
	int const horaNormal = 40;

	int horasTrab;
	int pagoParcial;
	int salarioSem;

	printf("\n Ingrese la cantidad de horas trabajadas por el empleado: \n");
	scanf("%d", &horasTrab);

	if (horasTrab >= 1 && horasTrab <= horaNormal)
	{
		salarioSem = horasTrab * precioHora;
		printf("\n El salario (sin horas extras) que le corresponde al empleado es de: %d \n", salarioSem);

	}else if(horasTrab > horaNormal){
		horasTrab = (horasTrab - horaNormal) * precioHoraExtra;
		salarioSem = horasTrab + (horaNormal * precioHora);
		printf("\n El salario (con horas extras) que le corresponde al empleado es de: %d \n", salarioSem);
	}else{
		printf("\n Las horas ingresadas no corresponden a un rango valido \n");
	}

	return 0;
}