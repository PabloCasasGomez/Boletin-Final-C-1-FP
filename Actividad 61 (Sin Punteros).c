#include <stdio.h>
#define FILAS 4
#define COLUMNAS 3


float mediaElementoSinP(int iMatriz[][COLUMNAS],int iFila,int iColumna);
void calculaTablaMediasSinP(int iMatriz[][COLUMNAS],float fMedias[][COLUMNAS]);

int main ()
{
   int iMatriz[FILAS][COLUMNAS]={{2,6,2},{1,3,5},{6,3,8},{1,1,6}};
   float fMedias[FILAS][COLUMNAS];

   calculaTablaMediasSinP(iMatriz,fMedias);

   int iFila,iColumna;

   for(iFila=0;iFila<FILAS;iFila++)
   {
       for(iColumna=0;iColumna<COLUMNAS;iColumna++)
       {
           printf(" %.1f ",fMedias[iFila][iColumna]);
       }
       printf("\n");
   }
}

void calculaTablaMediasSinP(int iMatriz[][COLUMNAS],float fMedias[][COLUMNAS])
{
    int iFila,iColumna;
    for(iFila=0;iFila<FILAS;iFila++)
    {
        for(iColumna=0;iColumna<COLUMNAS;iColumna++)
        {
            fMedias[iFila][iColumna]=mediaElementoSinP(iMatriz,iFila,iColumna);
        }
    }
}


float mediaElementoSinP(int iMatriz[][COLUMNAS],int iFila,int iColumna)
{
    float fMedia=0;
    int numElementos=0;
    int iContFila,iContColumna;

    for(iContFila=iFila-1;iContFila<iFila+2;iContFila++)
    {
        for(iContColumna=iColumna-1;iContColumna<iColumna+2;iContColumna++)
        {
            if(iContFila>=0&&iContFila<FILAS&&iContColumna>=0&&iContColumna<COLUMNAS)
            {
                fMedia+=iMatriz[iContFila][iContColumna];
                numElementos++;
            }
        }
    }
    return fMedia/numElementos;
}

