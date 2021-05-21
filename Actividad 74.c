#include <stdio.h>
#define TAM 100

int centroEspacio (float matriz[TAM][2])
{
    float suma,media,min=dist(matriz[0],matriz[1]);
    int posmin,i,j;
    for(i=0;i<TAM;i++)
    {
        suma=0;
        for(j=0;j<TAM;j++)
        {
            if(i!=j)
                suma=dist(m[i],m[j]);
        }
        media=suma/(TAM-1);
        if(min>media)
        {
            min=media;
            posmin=i;
        }
    }
    return posmin;
}

float dist(int a[],int b[])
{
    return sqrt(pow(a[0]-b[0],2)+pow(a[1]-b[1],2));
}