#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* strcpypropio (char*,char*);
int main()
{
    char s[100]="hola";
    char b[100]=" Blas";
    printf("%s",strcpypropio(s,b));
    return 0;
}
char* strcpypropio(char* s,char* b)
{
    int n=strlen(s);
    for (int i=0;i<=n;i++) s[i+n]=b[i];
    return s;
}
