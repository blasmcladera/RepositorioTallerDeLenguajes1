#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int a,b,c,d,i;
    int e=0;
    for(i=1;i<=4;i++)
    {
        a = rand() % 101;
        b = rand() % 101;
        c = a+b;
        printf("%d + %d =",a,b);
        scanf("%d",&d);
        if (d==c)
        {
            printf("El resultado es correcto.\n");
            e++;
        }
        else printf("El resultado es incorrecto.\n");
    }
    switch (e)
    {
        case 0: printf("Nota: E");break;
        case 1: printf("Nota: D");break;
        case 2: printf("Nota: C");break;
        case 3: printf("Nota: B");break;
        case 4: printf("Nota: A");break;
    }
    return 0;
}
