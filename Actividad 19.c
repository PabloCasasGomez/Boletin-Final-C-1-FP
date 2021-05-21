#include <stdio.h>
#define TAM 100

int main()
{
    int numero,bexito=0,i=0;
    printf("introduce el numero para saber si es cuadrada perfecto: ");
    scanf("%d",&numero);

    while(i<numero&&bexito==0)
    {
        if((i*i)==numero)
        {
            bexito=1;
        }
        else
        {
            bexito=0;
        }
        i++;
    }
    if(bexito==1)
    {
        printf("Dale candela");
    }
    else
    {
        printf("Patetic");
    }
}
