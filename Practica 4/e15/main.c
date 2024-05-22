#include <stdio.h>
#include <stdlib.h>
int** crearPiramide (int n){
    int **filas = (int**)(calloc(n,sizeof(int*)));
    int i,j;
    for (i=0;i<n;i++){
        filas[i] = (int*)(calloc(i+1,sizeof(int)));
        for (j=0;j<i+1;j++){
            if ((j==0)||(j==i)) filas[i][j]=1;
            else filas[i][j]= filas[i-1][j-1] + filas[i-1][j];
        }
    }
    return filas;
}

void imprimirPiramide (int** filas,int n){
    int i,j,z,k=1;
    int h=n;
    for (i=0;i<n;i++){
        for (z=0;z<h-1;z++) printf(" ");
        for (j=0;j<k;j++){
            printf("[%d]",filas[i][j]);
        }
        k++;
        h--;
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int **filas = crearPiramide(n);
    imprimirPiramide(filas,n);
    return 0;
}
