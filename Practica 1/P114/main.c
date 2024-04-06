#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int invertir (int);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d", invertir(a));
    return 0;
}

int invertir (int a)
{
    int b=a;
    int n=0;
    do
    {
        b=b/10;
        n++;
    }
    while (b!=0);/*en n tengo cant de digitos de a*/
    n--;
    for (;n>=0;n--)
    {
        b=b+((a%10)*(pow(10,n)));
        a=a/10;
    }
    return(b);
}
