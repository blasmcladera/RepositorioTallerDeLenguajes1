#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    int c=0;
    printf("Ingrese palabras,finalice con XXX:\n");
    scanf("%s",s);
    while (strcmp(s,"XXX"))
    {
        if (s[(strlen(s)-1)]=='o') c++;
        scanf("%s",s);
    }
    printf("Contador: %d",c);
    return 0;
}
