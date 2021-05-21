#include <stdio.h>
#define TAM 100

int main ()
{
    int i,j,x,subvector[TAM],bexito=0,matriz[i][j],tam=3;

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            printf("Introduce el valor de %d/%d",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    while(i<tam&bexito==0)
    {
        while(j<tam&bexito==0)
        {
            while(x<tam&bexito==0)
            {
                subvector[x]=matriz[x][j];
                x++;
            }
            if(subvector[j]==matriz[i][j])
            {
                bexito=1;
            }
            j++;
        }
        x++;
    }
    if(bexito==1)
        printf("Has encontrado un subvector de una columna en una fila");
    else
        printf("No se encontro nada");
}

