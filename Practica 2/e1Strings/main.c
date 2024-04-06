#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    int i,c=0;
    printf("Ingrese palabras, finalice con ZZZ: \n");
    scanf("%s",s);
    while ((strcmp(s,"ZZZ")))
    {
        if (strlen(s)==5) c++;
        scanf("%s",s);
    }
    printf("Palabras con 5 letras: %d",c);
    return 0;
}
