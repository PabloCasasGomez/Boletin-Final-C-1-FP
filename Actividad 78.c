#include <stdio.h>
#define TAM 100

int main ()
{

    int N,x=2,i,contador,vector[TAM],bexito=0;

    printf("Introduce la cantidad de numeros primos que buscas");
    scanf("%d",&N);

    contador=N;
    while(N>=0)
    {
        i=2;bexito=0;
        while(i<x&&bexito==0)
        {
            if(x%i==0)
                bexito=1;
            i++;
        }
        if(i==x)
        {
            vector[contador-N]=x;
            N--;
        }
        x++;

    }

    for(i=0;i<contador;i++)
    {
        printf(" %d ",vector[i]);
    }
}

