#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i,n,max=-1;
    scanf("%d",&n);
    int *ptr = (int*) calloc(n,sizeof(int));
    for (i=0;i<n;i++) {
        *(ptr+i)= rand()%100;
        if (*(ptr+i)>max) max=*(ptr+i);
        printf("[%d]",*(ptr+i));
    }
    printf("\n %d",max);
    free(ptr);
    return 0;
}
