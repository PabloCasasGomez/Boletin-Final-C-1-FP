#include <stdio.h>
#include <math.h>
#define TAM 100

int main ()
{
    int matriz[TAM][TAM],newmatriz[TAM][TAM],i,j,tam,p,q,f,c;

    printf("Introduce el tamaño de la matriz cuadrada: ");
    scanf("%d",&tam);

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            printf("Introduce el numero de la posicion %d/%d en la matriz: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("Que fila (q) y que columna (p), quiere eliminar de la matriz?: ");
    scanf("%d%d",&q,&p);

    f=0;
    for(i=0; i<tam; i++)
    {
        if(i!=q)
        {
            c=0;
            for(j=0; j<tam; j++)
            {
                if(j!=p)
                {
                    newmatriz[f][c]=matriz[i][j];
                    c++;
                }
            }
        f++;
        }
    }

    for(i=0; i<tam-1; i++)
    {
        for(j=0; j<tam-1; j++)
        {
                printf(" %d ",newmatriz[i][j]);
        }
        printf("\n");
    }
}
