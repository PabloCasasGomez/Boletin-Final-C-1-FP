#include <stdio.h>
#include <math.h>
#define TAM 100

int main ()
{
    int matriz[TAM][TAM],i,j,x,tam,columna=0,fila=0,bexito=0;

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

    x=0;
    while(x<tam&&bexito==0)
    {
        i=0;
        while(i<tam)
        {
            columna+=matriz[i][x];
            i++;
        }
        j=0;
        while(j<tam)
        {
            fila+=matriz[x][j];
            j++;
        }
        x++;

        printf("\n%d",fila);
        printf("\n%d",columna);

        if(columna==fila)
        {
            bexito=1;
        }
        else
        {
            columna=0;
            fila=0;
        }
    }

    if(bexito==1)
        printf("Hay una fila que suma lo mismo que una columna");
    else
        printf("No hay ninguna coincidencia");

}