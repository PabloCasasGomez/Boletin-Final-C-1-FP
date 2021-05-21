#include <stdio.h>
#include <math.h>
#define TAM 100

int main ()
{
    int matriz[TAM][TAM],i,j,x,tam,booleano;

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

    booleano=comprobarTriangular(matriz,tam);
    
    if(booleano==1)
        printf("Estamos ante una matriz triangular superior");
    else
        printf("No estamos ante una matriz que cumpla los requesitos");
    

}

int comprobarTriangular (int matriz[TAM][TAM], int tam)
{
    int i,x,bexito=0;

    i=0;
    while(i<tam&&bexito==0)
    {
        x=i;
        while(x>0&&bexito==0)
        {
            if(matriz[x][i]!=0)
            {
                bexito=1;
            }
            x--;
        }
        i++;
    }
    return bexito;
}
