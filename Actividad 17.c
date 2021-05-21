#include <stdio.h>
#define TAM 100

int main()
{
    int numero,valor,i;
    printf("Introduzca el número total de multiplos de 3 que desea imprimir por pantalla: ");
    scanf("%d",&numero);

    for(i=0;i<numero;i++)
    {
        valor=(i+1)*3;
        printf(" %d ",valor);
    }
    printf("\nDone");
}
