#include <stdio.h>
#include <math.h>
#define TAM 100

int main ()
{
    int matriz[TAM][TAM],i,j,tam,bexito=0,valor;
    int *punexito,*elemento;
    punexito=&bexito;
    elemento=&valor;

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

    comprobarDiagonales(matriz,punexito,tam,elemento);

    if(bexito==1)
        printf("El  elemento %d esta repetido en la diagonal principal y en la secundaria",*elemento);
    else
        printf("No hay ningun elemento en las diagonales que sea igual");

}

void comprobarDiagonales (int matriz [TAM][TAM],int *punexito,int tam,int *elemento)
{
    int i,j,diagonalprincipal[TAM],diagonalsecundaria[TAM];

    i=0;
    while(i<tam)
    {
        j=0;
        while(j<tam)
        {
            diagonalprincipal[i]=matriz[i][j];
            diagonalsecundaria[i]=matriz[j][i];
            j++;
        }
        i++;
    }

    i=0;
    while(i<tam&&*punexito==0)
    {
        j=0;
        while(j<tam&&*punexito==0)
        {
            printf("\nprincipal: %d",diagonalprincipal[i]);
            printf("\nprincipal: %d",diagonalsecundaria[j]);
            if(diagonalsecundaria[i]==diagonalprincipal[j])
            {
                *punexito=1;
                *elemento=diagonalprincipal[j];
            }
            j++;
        }
        i++;
    }
}
