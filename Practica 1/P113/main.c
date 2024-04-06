#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,i,p = 0;
do
{
    printf("Ingrese un numero:\n");
    scanf("%d",&num);
    i=2;
    do
    {
        if (!(num%i)) break;
        i++;
    }
    while (i<num);
    if (num==i)
    {
        printf("%d es primo \n",num);
        p++;
    }
    else printf ("%d no es primo \n",num);
}
while (p<5);
printf("Ya se escribieron %d numeros primos",p);
return 0;
}
