#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f = fopen("archivo.txt","r");
    float n,t=0;
    int a;

    if (f==NULL){
        return -1;
    }
    fscanf(f,"%d|%f;",&a,&n);
    while (!feof(f)){
        t+=n;
        fscanf(f,"%d|%f;",&a,&n);
    }

    printf("%f",t);
    return 0;
}
