# include <stdio.h>
#include <math.h>
#define TAM 100

int main()
{
    int dim,num[TAM],i,contador=0,suma=0;

    printf("Introduce el numero: ");
    scanf("%d",&dim);

    i=0;
    while(dim > 0) //do till num greater than  0
    {
        num[i]= dim%10; //split last digit from number
        printf("%d\n",num[i]); //print the digit.
        dim = dim / 10;    //divide num by 10. num /= 10 also a valid one
        i++;
        contador++;
    }

    for(i=0;i<contador;i++)
    {
        suma+=fabs(num[i]);
    }
    printf("\n%d",suma);
}
