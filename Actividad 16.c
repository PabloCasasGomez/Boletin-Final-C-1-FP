#include <stdio.h>
#include <conio.h>
#define TAM 100

int main()
{
    int total[TAM],max,min,i=0,bcondicion=0;

    while(i>TAM||bcondicion==0)
    {
        printf("Introduce el n�mero: ");
        scanf("%d",&total[i]);
        if(i==0)
        {
            max=total[i];
            min=total[i];
        }
        if(total[i]<0)
        {
            bcondicion=1;
        }
        if(max<total[i])
        {
            max=total[i];
        }
        if(min>total[i]&&total[i]>=0)
        {
            min=total[i];
        }
        i++;
    }

    printf("El valor m�ximo es %d y el valor min es %d",max,min);
}
