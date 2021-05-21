#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main()
{
    int i,j,x,suma,MaxLong,tam,contadorvector=0,vector[TAM];

    printf("Introduzca el tamaño del vector:");
    scanf("%d",&tam);

    for(i=0;i<tam;i++)
    {
       printf("Introduce el valor %d del vector:",i);
       scanf("%d",&vector[i]);
    }

    printf("Introduzca numero maximo de elementos que puede contener un subvector:");
    scanf("%d",&MaxLong);

    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            suma=0;
            for(x=j;x<tam;x++)
            {
            suma+=vector[x];
            printf("\n%d",suma);
            if(suma==vector[i]||contadorvector<=MaxLong)
            {
                contadorvector++;
                printf("\nOK");
            }

            }
            printf("\n");
        }
    }

    printf("En el vector hay un total de %d subvectores de numeros adyacentes que coinciden con alun numero del vector",contadorvector);

}