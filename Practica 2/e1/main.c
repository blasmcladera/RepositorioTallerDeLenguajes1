#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pi=0;
    int ip=0;
    int n=50;
    int arreglo[n];
    for (int i=0;i<n;i++)
    {
        arreglo[i]=rand();
        if ((!(arreglo[i]%2))&&(i%2)) pi++;
        if ((arreglo[i]%2)&&(!(i%2))) ip++;
    }
    printf("Cantidad de numeros pares en posiciones impares: %d \n", pi);
    printf("Cantidad de numeros impares en posiciones pares: %d \n", ip);
    return 0;
}
