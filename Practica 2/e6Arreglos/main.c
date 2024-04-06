#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int i,n=10;
    int A[10];
    for (i=0;i<n;i++) A[i]=0;
    for (i=0;i<n;i++) printf("%d",A[i]);
    printf("\n");
    int x;
    x=rand();
    printf("%d\n",x);
    do
    {
        A[x%10]++;
        x=x/10;
    }
    while (x!=0);
    for (i=0;i<n;i++) printf("%d",A[i]);
    return 0;
}
