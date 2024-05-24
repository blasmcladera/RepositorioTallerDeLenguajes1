#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f = fopen("vinos.csv","r");

    if (f==NULL) return -1;
    char str[20];
    int i;
    for (i=0;i<8;i++){
            fscanf(f,"%[^;];",str);
            printf("%12s",str);
    }
    fscanf(f,"%s",str);
    printf("%12s",str);


    return 0;
}
