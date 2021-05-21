#include <stdio.h>
#define TAM 100

int main ()
{
    int tam=5,vector[TAM],i,bexito=1;

    for(i=0;i<tam;i++)
    {
        printf("Introduce el valor del vector en posicion %d: ",i);
        scanf("%d",&vector[i]);
    }

    i=tam-1;
    while(bexito==1&&i<tam)
    {
        if(vector[i]-vector[i-1]==vector[i-2])
        {
            bexito=1;
        }
        else{
            bexito=0;
        }
        i++;
    }
    if(bexito==1)
        printf("El vector es una sesion Fibonnaci");
    else
        printf("El vector NO es una sesion Fibonnaci");

}
