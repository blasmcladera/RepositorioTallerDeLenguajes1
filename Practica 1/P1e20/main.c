#include <stdio.h>
#include <stdlib.h>
int damePar(int *);
int main()
{
    int n,i,a=0;
    int *aPtr=&a;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d \n",damePar(aPtr));
    }
    return 0;
}
int damePar (int * aPtr)
{
    int b= 2*(*aPtr);
    *aPtr=*aPtr+1;
    return b;
}
