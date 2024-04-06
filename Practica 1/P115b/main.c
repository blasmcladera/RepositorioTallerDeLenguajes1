#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d",fact(a));
    return 0;
}
int fact (int a)
{
    if (a==0) return 1;
    else return (a*(fact(a-1)));
}
