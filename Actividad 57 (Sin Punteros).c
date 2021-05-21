#include <stdio.h>
#include <math.h>
#define TAM 100

int main ()
{
    int matriz[TAM][TAM],i,j,n,tam,posicion,bexito=0,suma;

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

    printf("Introduce el valor de la suma que estas buscando: ");
    scanf("%d",&n);

    i=0;
    while(bexito==0&&i<tam)
    {
        suma=0;
        j=0;
        while(bexito==0&&j<tam)
        {

            suma+=matriz[i][j];

            if(suma>=n)
            {
                bexito=1;
                posicion=i;
            }
            j++;
        }
        i++;
    }

    if(bexito==1)
        printf("La fila %d presenta una suma mayor o igual que el valor que has introducido",posicion);
    else
        printf("Pa tu casa");
}
