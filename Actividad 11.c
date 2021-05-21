#include <stdio.h>
#include <conio.h>
#define TAM 100

int main()
{
    int acumulado[TAM],ntotal,i;

    printf("Cuantos números desea que tenga su serie de Fibonacci: ");
    scanf("%d",&ntotal);

    for(i=0; i<ntotal; i++)
    {
        if(i==0||i==1)
        {
            acumulado[i]=1;
            printf(" 1 ");
        }
        else
        {
            acumulado[i]=acumulado[i-1]+acumulado[i-2];
            printf(" %d ",acumulado[i]);

        }

    }
}