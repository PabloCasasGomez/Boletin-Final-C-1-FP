#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int num[5],i,aux,j;

    for(i=0; i<5; i++)
    {

        printf("Introduce el %d numero: \n",i);
        scanf("%d",&num[i]);

    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i-1; j++)
        {
            if(num[j]>num[j+1])
            {
                aux=num[j];
                num[j]=num[j+1];
                num[j+1]=aux;
            }
        }
    }


    for(i=0; i<5; i++)
    {

        printf("%d ",num[i]);

    }
}
