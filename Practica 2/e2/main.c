#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float promedio (float[], int);
float minimo (float[], int);
int posMax (float[], int);
int main()
{
    srand(time(NULL));
    int n,i;
    printf("Ingrese cantidad de numeros: ");
    scanf("%d",&n);
    float arreglo[n];
    for (i=0;i<n;i++)
    {
        arreglo[i]=((rand()%10001)/100.0f); /*numeros float del 0 al 100 con 2 decimales*/
        printf("%.2f \n",arreglo[i]);
    }
    printf("Promedio de sus valores: %.2f \nValor minimo: %.2f \nPosicion del valor maximo: %d",promedio(arreglo,n),minimo(arreglo,n),posMax(arreglo,n));
    return 0;
}
float promedio (float arreglo[], int n)
{
    for (int i=1;i<n;i++) arreglo[0]+=arreglo[i];
    return (arreglo[0]/n);
}
float minimo (float arreglo[], int n)
{
    for (int i=1;i<n;i++) if (arreglo[0]>arreglo[i]) arreglo[0]=arreglo[i];
    return (arreglo[0]);
}
int posMax (float arreglo[], int n)
{
    float m=-1;
    int p;
    for (int i=0;i<n;i++)
    {
        if (arreglo[i]>m)
        {
            p=i;
            m=arreglo[i];
        }
    }
    return ++p;
}

