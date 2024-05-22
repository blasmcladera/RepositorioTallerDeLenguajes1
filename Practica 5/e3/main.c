#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen ("archivo.txt","r");
    if (f==NULL){
        printf("ERROR");
        return 1;
    }
    int n,max=-1;
    while (fscanf(f,"%d",&n))
        if (n>max)
            max=n;
    printf("%d",max);
    return 0;
}
