#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f = fopen("arhivo.txt","r");
    float n,t=0;

    if (f==NULL){
        return -1;
    }

    while (!feof(f)){
        fscanf(f,"%d|%f;",&n);
        t+=n;
    }

    printf("%d",t);
    return 0;
}
