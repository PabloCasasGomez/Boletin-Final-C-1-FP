#include <stdio.h>
#include <conio.h>
#define TAM 100

int main()
{
    int factorial=1,ntotal,i;

    printf("Cuantos números desea que tenga el factorial: ");
    scanf("%d",&ntotal);

    for(i=ntotal;i>0;i--)
    {
        factorial*=i;
    }
    printf("%d",factorial);
}
