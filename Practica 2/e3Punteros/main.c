#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* ocurrencias (char*,int,int);
int main()
{
    char s[100]="aaaaaaAAaaaAAAaaAAAaaAAaaaaaAAAA";
    char a,b;
    printf("Ingrese caracter 1: \n");
    scanf("%c",&a);
    printf("Ingrese caracter 2: \n");
    scanf("\n%c",&b);
    printf("%s",ocurrencias(s,a,b));
}
char* ocurrencias (char* s,int a,int b)
{
    for (int i=0;i<strlen(s)-1;i++)
    {
        if (s[i]==a) s[i]=b;

    }
    return s;
}
