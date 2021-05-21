# include <stdio.h>
#include <math.h>
#define TAM 100

int main()
{
	int i,j,variable,matriz[TAM][TAM];

	for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Introduzca el valor del elemento %d y %d de la matriz: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("Introduzca que fila sobre la que quiere realiza la suma: ");
    scanf("%d",&variable);

    printf("El resultado de la suma de la fila %d es %d",variable,sumaFila(matriz,variable));

}

int sumaFila(int matriz[TAM][TAM],int variable)
{
    int i,suma=0;

    for(i=0;i<3;i++)
    {
        suma+=matriz[variable][i];
    }
    return suma;
}
