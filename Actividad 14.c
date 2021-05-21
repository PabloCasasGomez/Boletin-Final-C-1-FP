#include <stdio.h>
#include <conio.h>
#define TAM 100

int main()
{
    int contador,num1,num2,resultado=0;

    printf("Introduce los dos numeros a multiplicar: ");
    scanf("%d%d",&num1,&num2);

    contador=num1;

    while(contador>0)
    {
        resultado+=num2;
        contador--;
    }
    printf("%d",resultado);
}
