#include <stdio.h>
#include <math.h>
#define TAM 100

void main()
{
    int num = 0, pos;

    printf("Introduce un numero: ");
    scanf("%d", &num);

    printf("Introduce una posicion: ");
    scanf("%d", &pos);

    printf("La posicion %d del numero %d es %d.\n", pos, num, obtenerDigito(num, pos));
}

int obtenerDigito(int num, int pos)
{
    int r, t1, t2;

    t1 = pow(10, pos+1);
    r = num % t1;

    if (pos > 0)
    {
        t2 = pow(10, pos);
        r = r / t2;
    }

    return r;
}
