#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void devolverSuma (int [][7],int [][7],int [][7],int ,int);
int main()
{
    srand(time(NULL));
    int i,j;
    int f=5;
    int c=7;
    int A[f][c],B[f][c],C[f][c];
    for (i=0;i<f;i++)
    {
        for (j=0;j<c;j++)
        {
            A[i][j]=rand()%6;
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0;i<f;i++)
    {
        for (j=0;j<c;j++)
        {
            B[i][j]=rand()%5;
            printf(" %d ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0;i<f;i++)
    {
        for (j=0;j<c;j++)
        {
            C[i][j]=0;
            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    devolverSuma(A,B,C,f,c);
    for (i=0;i<f;i++)
    {
        for (j=0;j<c;j++)
        {
            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void devolverSuma (int A[][7],int B[][7],int C[][7],int f,int c)
{
    int *p=C;
    int i,j;
    for (i=0;i<f;i++)
    {
        for (j=0;j<c;j++)
        {
            *p=(A[i][j]+B[i][j]);
            p++;
        }
    }


}
