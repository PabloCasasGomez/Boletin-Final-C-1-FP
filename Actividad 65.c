#include <stdio.h>
#include <conio.h>
#define TAM 100

int main()
{

    int i,j,value,vector[TAM],tam,contador=0;

    printf("Tamaño del vector");
    scanf("%d",&tam);

    for(i=0;i<tam;i++)
    {
        printf("Introduce el valor del vector en la posicion %d",i);
        scanf("%d",&vector[i]);
    }

    printf("Que valor quieres usar como X?");
    scanf("%d",&value);

    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            if(1<vector[i]<vector[j]<value&&(vector[j]-vector[i])<=value)
            {
                printf("\n%d",vector[j]-vector[i]);
                contador++;
            }
        }
    }

    printf("Hay un total de %d elementos que cumplen todas las condicionantes",contador);
}
