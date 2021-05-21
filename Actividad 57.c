#include <stdio.h>
#include <math.h>
#define TAM 100

int main ()
{
    int matriz[TAM][TAM],i,j,n,tam,posicion,bexito=0;
    int *punexito=&bexito;

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

    comprobarVector(matriz,&punexito,n);
    printf("%d",*punexito);

}

void comprobarVector(int matriz[TAM][TAM],int *punexito, int n,int tam)
{
    int i,j,suma;

    i=0;
    while(*punexito==0&&i<tam)
    {
        suma=0;
        j=0;
        while(*punexito==0&&j<tam)
        {

            suma+=matriz[i][j];

            if(suma>=n)
            {
                *punexito=1;
            }
            j++;
        }
        i++;
    }
}