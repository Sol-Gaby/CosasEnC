#include <stdio.h>

//variables globales
float altoPared;
float anchoPared;
float costoM2;
float supPared;
float costoMdeO;

int main(){
    //pedido/toma de datos al usuario
    printf("\n Ingrese el largo de la pared: \n");
    scanf("%f", &altoPared);
    printf("\n Ingrese el ancho de la pared: \n");
    scanf("%f", &anchoPared);
    printf("\n Ingrese el costo de mano de obra: \n");
    scanf("%f", &costoM2);
    
    //calculos
    supPared = anchoPared * altoPared;
    costoMdeO = (supPared * costoM2)*1.2;
    printf("\n El costo de la mano de obra para pintar la pared es de: %.2f", costoMdeO);
    return 0;
}