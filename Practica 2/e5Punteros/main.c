#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap (int*,int*);
void invertir(int[],int);
int main()
{
    srand(time(NULL));
    int a=7;
    int b=4;
    printf(" %d ",a);
    printf(" %d ",b);
    swap(&a,&b);
    printf(" %d ",a);
    printf(" %d ",b);
    printf("\n");
    int n = 10;
    int A[n];
    for (int i=0;i<n;i++)
    {
        A[i]=rand()%10;
        printf(" %d ",A[i]);
    }
    invertir(A,n);
    printf("\n");
    for (int i=0;i<n;i++) printf(" %d ",A[i]);
    return 0;
}
void invertir(int A[],int n)
{
    int *p=A;
    for (int i=0;i<n;i++)
    {
        swap(p+i,p+(n-1));
        n--;
    }
}
void swap (int*a,int*b)
{
    int c=*b;
    *b=*a;
    *a=c;
}

