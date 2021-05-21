#include <stdio.h>
#define TAM 100

int main()
{
    int numero, bexito=1,i=2;

    printf("Introduce un número para comprobar si es primo o no: ");
    scanf("%d",&numero);

    while(i<numero&&bexito==1)
    {
        if(numero%i==0)
        {
            bexito=0;
        }
        i++;
    }

    if (numero == 1)
    {
        printf("1 is neither prime nor composite.");
    }

    else
    {
        if(bexito==1)
        {
            printf("Es un número primo!");
        }
        else
        {
            printf("No es numero primo");
        }
    }


}
