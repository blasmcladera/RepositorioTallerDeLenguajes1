#include <stdio.h>
#include <stdlib.h>
void maxmin (float *,float *, int);
int main()
{
    int n;
    float maxDato=0;
    float minDato=0;
    float *maxPtr=&maxDato;
    float *minPtr=&minDato;
    scanf("%d",&n);
    maxmin(maxPtr,minPtr,n);
    printf("%f %f",*maxPtr,*minPtr);
    return 0;
}
void maxmin (float * maxPtr,float * minPtr,int n)
{
    int i;
    float a;
    for (i=1;i<=n;i++)
    {
        scanf("%f",&a);
        if (a>=*maxPtr) *maxPtr=a;
        if (a<=*minPtr) *minPtr=a;
    }
}
