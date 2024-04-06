#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void imprimirTranspuesta(int [][7],int);
int main()
{
    srand(time(NULL));
    int i,j,m=7;
    int A[m][m];
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            A[i][j]=rand()%10;
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    imprimirTranspuesta(A,m);
    return 0;
}
void imprimirTranspuesta(int A[][7],int m)
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            printf(" %d ",A[j][i]);
        }
        printf("\n");
    }
}
