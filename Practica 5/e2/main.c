#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen ("archivo.txt","r");
    char str[100];
    if (f==NULL){
        printf("ERROR");
        return 1;
    }
    while (fgets(str,100,f)) printf("%s",str);
    return 0;
}
