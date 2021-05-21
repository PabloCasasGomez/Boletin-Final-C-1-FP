#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 100

void main ()
{
    int num,i,opcion,suma=0;

    printf("Introduzca cuantos numeros quiere obtener por pantalla: \n");
    scanf("%d",&num);
    printf("¿Quiere considerar el 0 como numero natural? (0=NO) (1=YES) ");
    scanf("%d", &opcion);

    if(opcion==0)
    {
        i=0;
        while(i<num)
        {
            suma+=pow(i+1,2);
            i++;
        }
        printf("%d", suma);

    }
    if(opcion==1)
    {
        i=0;
        while(i<num)
        {
            suma+=pow(i,2);
            i++;
        }
        printf("%d", suma);
    }


}
