#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int i;
for(i=1;i<=10;i++)
{
printf("La raiz cuadrada de %d es %.2f \n",i,sqrt(i));
printf("El cuadrado de %d es %.2f \n",i,pow(i, 2));
printf("El cubo de %d es %.2f \n",i, pow( i,  3));
}
return 0;
}
