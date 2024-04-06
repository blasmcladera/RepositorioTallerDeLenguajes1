#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",fact(a));
    return 0;
}
int fact (int a)
{
    int b=1;
    do
    {
        b=b*a;
    }
    while (--a>=1);
    return b;
}
