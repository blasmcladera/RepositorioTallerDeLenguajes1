#include <stdio.h>
#include <stdlib.h>

int main()
{
int valor;
scanf("%d",&valor);
switch (valor % 2) {/*cada accion debe terminar en break*/
 case 0: printf("El valor es par"); break;
 case 1: printf("El valor es impar"); break;
}
return 0;
}
