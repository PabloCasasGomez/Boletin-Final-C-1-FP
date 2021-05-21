#include <stdio.h>
#define TAM 100

int main ()
{
    int tam,i,j,x,posicion1,posicion2,resultado,auxiliar,matriz[TAM][TAM],f,c;

    printf("Introduce el tamaño de la matriz cuadrada:");
    scanf("%d",&tam);

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            printf("Introduce el elemento %d / %d de la matriz cuadrada:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }


    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            printf("%d",matriz[i][j]);
        }
        printf("\n");
    }


    resultado=0;
    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            for(c=j; c<tam; c++)
            {
                auxiliar=0;
                for(f=i; f<tam; f++)
                {
                    auxiliar+=matriz[f][c]*matriz[f][c+1];
                    if(auxiliar>resultado)
                    {
                        resultado=auxiliar;
                        posicion1=c;
                        posicion2=c+1;
                    }
                }
            }
        }
    }
    printf("Las dos columnas con un producto escalar mayor son %d y %d con un total de %d",posicion1,posicion2,resultado);
}
