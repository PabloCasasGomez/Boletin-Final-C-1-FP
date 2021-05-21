#include <stdio.h>

int main ()
{
    int m1[2][3]={{3,4,6},{1,5,2}};
    int m2[2][3]={{6,4,3},{2,5,1}};
    int i,j,bexito=0;

    while(i<2&&bexito==0)
    {
        while(j<3&&bexito==0)
        {
            if(m1[i][j]!=m2[j][i])
            {
                bexito=1;
            }
            j++;
        }
        i++;
    }
    if(bexito==1)
        printf("No son imagenes especulares");
    else
        printf("Son imagenes especulares");
}
