# include <stdio.h>
#include <math.h>
#define TAM 100

int main()
{
    int dim,i,j,suma=0,producto[TAM],vectores[TAM][TAM];

    printf("Introduce las dimensiones del vector: ");
    scanf("%d",&dim);

    for(i=0; i<2; i++)
    {
        for(j=0; j<dim; j++)
        {
            printf("Introduce la coordenada %d del vector %d: ",i,j);
            scanf("%d",&vectores[i][j]);
        }

    }

    for(i=0; i<2; i++)
    {
        producto[i]=vectores[0][i]+vectores[1][i];
    }

        printf("El resultado del producto escalar de los dos vectores es: ");
        printf("\n (%d / %d)",producto[0],producto[1]);
}
