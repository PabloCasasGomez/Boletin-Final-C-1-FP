#include <stdio.h>
#include <stdlib.h>
#define COLUMNA 3

void main ()
{
    int matriz[4][3]={{1,2,3},{2,4,6},{4,6,8},{10,11,12}},i,aux,j,bexito;

    for(i=0;i<COLUMNA;i++)
    {
        j=0;bexito=0;
        while(j<COLUMNA&&bexito==0)
        {
            if(matriz[j][i]!=matriz[i][j])
                bexito=1;
            j++;
        }
    }
    if(bexito==0)
        printf("En la matriz hay subvectores que coincidan");
    else
        printf("En la matriz NO hay subvectores que coincidan");
}

