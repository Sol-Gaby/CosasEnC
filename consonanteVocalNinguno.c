#include<stdio.h>

int EsLetra(char a);
int EsMayuscula( char a);
char AMinuscula(char a);
int EsVocal(char a);
int EsConsonante(char a);

int main(){
	char letra;

	printf("Ingrese el caracter a ser evaluado:\n");
	scanf("%c", &letra);



	if (EsLetra(letra) == 0){
	printf("El caracter ingresado '%c' es un simbolo/caracter/numero :(\n", letra);
    }else if (EsConsonante(letra)){
	    printf("El caracter ingresado '%c' es una CONSONATE!\n", letra);
    }else{
           printf("El caracter ingresado '%c' es una VOCAL\n", letra);
    }

}

int EsLetra(char a){
	int let;

	if ((a >= 'a' && a <= 'z')||(a >= 'A' && a <='Z')){
		let = 1;
	}else{
		let = 0;
	}
	return let;
}

int EsMayuscula( char a){

	int mayus;

	if((a >= 'A') && (a <= 'Z')){
		mayus = 1;
	}else{
		mayus = 0;
	}
	
	return mayus;
}

char AMinuscula(char a){
	return (a + ('a' - 'A'));
}

int EsVocal(char a){
	char min;

	if(EsMayuscula(a)){
		min = AMinuscula(a);
	}else{
		min = a;
	}

	return (min == 'a')||(min == 'e')||(min == 'i')||(min == 'o')||(min == 'u');
}

int EsConsonante(char a){
	char cons;
	int aux;

	if (EsMayuscula(a) && (!(EsVocal(a)))){
		cons = AMinuscula(a);
	}else{
		cons = a;
	}

	if (EsVocal(cons)){
		aux = 0;
	}else{
		aux = 1;
	}

	return aux;
}