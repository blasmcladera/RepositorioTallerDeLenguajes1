#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
char c;
printf("Ingrese el numero 1:");
scanf("%d",&a);
printf("Ingrese el numero 2:");
scanf("\n %d",&b);
printf("Ingrese operacion a realizar:");
scanf("\n %c",&c);
switch (c)
{
case'+': printf("El resultado es: %d", a+b); break;
case'-': printf("El resultado es: %d", a-b); break;
case'*': printf("El resultado es: %d", a*b); break;
case'/': printf("El resultado es: %d", a/b); break;
}
return 0;
}
