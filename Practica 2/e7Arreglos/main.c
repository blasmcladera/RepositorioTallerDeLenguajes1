#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int min,mes,mesMin,i,j,k,A[10][12][30];
    for (i=0;i<10;i++)
    {
        min=999999;
        for (j=0;j<12;j++)
        {

            mes=0;
            for (k=0;k<30;k++)
            {
                A[i][j][k]=rand()%101;
                mes=mes+A[i][j][k];
            }
            if(mes<=min){
                min=mes;
                mesMin=j;
            }
        }
        printf("Año: %d, mes en que menos llovio: %d\n",i+1,(mesMin+1));
    }
    return 0;
}
