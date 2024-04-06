#include <stdio.h>
int main()
{
int total; /*falta declarar x antes de usarla*/
int x;
x = 1;
while (x <= 10)
{
total += x;
++x;
}
printf("Total = %d",total); /*%d se usa para int*/
return 0;
}
