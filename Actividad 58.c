#include <stdio.h>
#include <math.h>
#define TAM 100

int main ()
{
    int matriz[TAM][TAM],i,j,n,tam,value,posicion[TAM],posicion1[TAM],bexito=0,suma,c,f;

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

    i=0;
    while(bexito==0&&i<tam)
    {
        j=0;
        while(bexito==0&&j<tam)
        {
            value=matriz[i][j];
            posicion1[0]=i;
            posicion1[1]=j;

            f=0;
            while(bexito==0&&f<tam)
            {
                c=0;
                while(bexito==0&&c<tam)
                {
                    if(i!=f||j!=c)
                    {
                        if(value==matriz[f][c])
                        {
                            bexito=1;
                            posicion[0]=f;
                            posicion[1]=c;
                        }
                    }

                    c++;
                }
                f++;
            }
            j++;
        }
        i++;
    }

    if(bexito==1)
        printf("La fila %d y columna %d tiene el numero %d que se repite en la fila %d y columna %d",posicion1[0],posicion1[1],value,posicion[0],posicion[1]);
    else
        printf("Pa tu casa");
}
