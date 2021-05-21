# include <stdio.h>
#include <math.h>
#define TAM 100

int main()
{
	int i,dim,vector[TAM],inverso[TAM];

	printf("cuanto numeros quiere que tenga el vector \n");
	scanf("%d",&dim);

    for(i=0;i<dim;i++)
    {
        printf("\nIntroduce el elemento %d del vector: ",i);
        scanf("%d",&vector[i]);
    }

    for(i=dim;i>0;i--)
    {
        inverso[dim-i]=vector[i-1];
    }

    for(i=0;i<dim;i++)
    {
        printf("\n %d",inverso[i]);
    }

}
