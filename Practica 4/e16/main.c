#include <stdio.h>
#include <stdlib.h>

int* divisores(int n,int* m){
    int i,j=1; int* resul=NULL;
    for (i=1;i<n;i++){
        if (!(n%i)){
            resul = (int*)(realloc(resul,sizeof(int)*j));
            resul[j-1]=i;
            j++;
        }
    }
    resul = (int*)(realloc(resul,sizeof(int)*j));
    resul[j-1]=n;
    *m=j;
    return resul;
}

void imprimir (int* nums,int m){
    int i;
    for (i=0;i<m;i++) printf("%d, ",nums[i]);
}

int main()
{
    int n,m,*nums;
    scanf("%d",&n);
    nums = divisores(n,&m);
    imprimir(nums,m);
    return 0;
}
