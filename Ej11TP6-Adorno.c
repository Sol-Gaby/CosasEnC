#include <stdio.h>

//creacion de la funcion swap que intercambia el valor que se le asigna a la primera variable (a), por el valor asignado a la segunda variable (b)
void Swap(int *x, int *y){
	//swap intercambia los valores de las variables por medio de la suma y resta de los valores asignados, sin la necesidad de una variable auxiliar para el intercambio
	//primera operacion, donde se suman ambos valores asignados a cada variable y esta es asignada a la primera variable (x)
	//en el ejemplo uno donde a la variable a que se corresponde con la variable (x) en la funcion es asignada con un valor distinto a la variable (y)
	//ejemplo: x= 2, y=8 ; (2+8)=10 ; x=10
	//en el ejemplo 2 a la variable (a) que se corresponde con (x) se le asigno el mismo valor que a la variable (y)
	//ejemplo 2: x=8, y=0; (8+0) ; x=8
	//ejemplo 3: x=-6, y=15 ; (-6+15)= 9 ; x=9
	//ejemplo 4: x=-24, y=0 ; (-24+0)= -24
	*x = (*x) + (*y);
	//segunda operacion, aqui se resta el valor de ambas variables y el resultado se le asigna a la segunda variable (y), este valor va a corresponde ya al varor asignado a (x)
	//ejemplo: X=10, y=8 ; (10-8)=2 ; y=2
	//ejemplo 2: x=8, y=0 ; (8-0)=8 ; y=8
	//ejemplo 3: x=9, y=15 ; (9-15)=-6 ; y=-6
	//ejemplo 4: x=-24, y=0 ; (-24-0)= -24
	*y = (*x) - (*y);
	//tercera operacion donde se vuelven a restar las variables, pero esta vez el resultado de la misma correspondera a la primera variable (x)
	//ejemplo: x=10, y=2 ; (10-2)=8 ; x=8
	//ejemplo 2: x=8, y=8 ; (8-8)=0 ; x=0
	//ejemplo 3: x=9, y=-6 ; (9-(-6))=15 ; x=15
	//ejemplo 4: x=-24, y=-24 ; (-24+0)=0
	*x = (*x) - (*y);
}

//declaracion de la funcion principal
int main(){
	int a;
	int b;
	
	//ingreso de los valores que se le asignaran a las variables (a y b)
	printf("Introduce el valor de la variable 'a'\n");
	//ejemplo: a=2
	//ejemplo 3: a=-6
	scanf("%i", &a);

	printf("Introduce el valor de la variable 'b'\n");
	//ejemplo b=8
	//ejemplo 3: b=15
	scanf("%i", &b);

	//invocacion de la funcion swap
	Swap(&a, &b);

	//imprecion de los valores de las variables ya intercambiados
	//ejemplo: aqui a muestra el valor almacenado de: 8
	printf("El valor de 'a' es: %d \n", a);
	//ejemplo: aqui y muestra el valor almacenado en b: 2
	printf("El valor de 'b' es: %d \n", b);

	//aqui se pide nuevamente al usuario que introduzca nuevos valores para cada variable a ser intercambiada

	printf("Introduce el valor de la variable 'a'\n");
	//ejemplo 2: a=8
	//ejemplo 4: a=-24
	scanf("%i", &a);

	printf("Introduce el valor de la variable 'b'\n");
	//ejemplo 2: b=8
	//ejemplo 4: b=-24
	scanf("%i", &b);

	//nueva invocacion de la funcion swap
	Swap(&a, &a);
	//en este caso como al invocar la funcion se llama 2 veces a el valor que se le asigno a la variable (a) al ejecutar la funcion la unica varible que posee valor es (a), por lo tanto (y) tiene un valor igua a 0

	//por lo que al imprimir el nuevo valor que le corresponderia a (a) este es cero
	printf("El valor de 'a' es: %d \n", a);

	//si se habilita este print se muestra que a (y) luego de la segunda operacion se le asigna el valor de 8, que es el resultado de restar 8-0 en el caso del ejemplo 2, o -24 en caso del ejemplo 4
	//printf("El valor de 'y' es: %d \n", b);

	return 0;
}