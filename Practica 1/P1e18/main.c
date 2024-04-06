#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    srand(time(NULL)); /*setea una semilla aleatoria*/
    for(i=1;i<=15;i++)
    {
        printf("%d \n",rand());/*usa esa semilla para la generacion aleatoria*/
    }
    return 0;
}
