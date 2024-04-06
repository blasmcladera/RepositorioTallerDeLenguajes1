#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void contar (char*);
int main()
{
    char s[100];
    scanf("%s",s);
    contar(s);
    return 0;
}
void contar (char* s)
{
    int n[25]={0};
    int j=strlen(s);
    for (int i=0;i<j;i++) n[(s[i]-97)]++;
    for (int i=0;i<=25;i++) printf("Numero de apariciones de la letra %c: %d\n",i+97,n[i]);
}
