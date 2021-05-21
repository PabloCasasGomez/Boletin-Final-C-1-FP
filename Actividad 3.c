#include <stdio.h>
#include <stdlib.h>
#define TAM 1000

int obtenerCifra (int numero[], int posicion);

void main ()
{
    int numero[TAM], posicion,i,tamanio;

    printf("Introduzca el Tamaño maximo del numero\n");
    scanf("%d",&tamanio);

    for(i=0;i<tamanio;i++)
    {
        printf("Introduce la %d cifra\n",i);
        scanf("%d",&numero[i]);
    }

    printf("Introduzca que posicion desea obtener del numero\n");
    scanf("%d",&posicion);

    printf("El numero correspondiente a la posicion %d es %d",posicion,obtenerCifra(numero,posicion));
}

int obtenerCifra (int numero[], int posicion)
{
    int cifra;
    cifra=numero[posicion];
    return cifra;
}
