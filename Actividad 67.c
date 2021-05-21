#include <stdio.h>
#include <math.h>
#define TAM 100

int main ()
{
    int i,j,k,l,num,bexito=0;

    printf("Introduce el numero que desea investigar: ");
    scanf("%d",&num);

    i=0;
    while(bexito==0&&i<999)
    {
        j=0;
        while(bexito==0&&j<999)
        {
            k=0;
            while(bexito==0&&k<999)
            {
                l=0;
                while(bexito==0&&l<999)
                {
                    if((num%(l*l))==0)
                    {
                        bexito=1;
                    }
                    l++;
                }
                k++;
            }
            j++;
        }
        i++;
    }

    printf("El numero %d se consigue por medio de la suma de (%d)^2 +(%d)^2 +(%d)^2 +(%d)^2",num,i,j,k,l);
}
