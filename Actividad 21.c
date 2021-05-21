# include <stdio.h>

int main()
{
 int i, Number, divisores = 0 ;

 printf("\n Introduce el numero que quieres comprobar \n") ;
 scanf("%d", &Number) ;

 for(i = 1 ; i < Number ; i++)
  {
   if(Number % i == 0)
     divisores+=i ;
  }

 if (divisores == Number)
    printf("\n %d es un numero perfecto", Number) ;
 else
    printf("\n %d no es un numero perfecto", Number) ;

return 0 ;
}
