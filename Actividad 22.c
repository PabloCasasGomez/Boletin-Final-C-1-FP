# include <stdio.h>
#define TAM 100
int main()
{
    int i, num[TAM],tamanio, bexito=1;

    printf("Introduce el tamaño maximo del numero");
    scanf("%d",&tamanio);

    for(i=0; i<tamanio;i++)
    {
        printf("\n Introduce la posicion %d del numero que quieres comprobar si es capicua \n",i) ;
        scanf("%d", &num[i]) ;
    }

    i=0;
    while(i<tamanio&&bexito==1)
    {
        if(num[i]==num[tamanio-1-i])
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
        printf("Es capicua");
    }
    else{
        printf("no es capicua");
    }

}
