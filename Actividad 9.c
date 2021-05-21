#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 100

void main ()
{
    int num[TAM],i,resultado=0;

    printf("Introduzca el rango entre el cual desea obtener las suma cuadrática de los números: ");

    for(i=0; i<2; i++)
    {
        scanf("%d",&num[i]);
    }


    for(i=num[0]; i<num[1]; i++)
    {
        resultado+=pow(i,2);

    }
    printf("El resultado de la suma cuadrática del rango es: %d",resultado);


}
