#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int funcion(int * v, int n);
void mescalar (int*,int,int,int);
int main()
{
    int v[10];
    int i;
    srand(time(NULL));
    for(i=0;i<10;i++){
        v[i] = rand()%11;
    }

    funcion(v,10);
//    int m,n,c,i,j;
//    printf("Ingrese numero de filas: ");
//    scanf("%d",&m);
//    printf("Ingrese numero de columnas: ");
//    scanf("%d",&n);
//    int A[m][n];
//    for (i=0;i<m;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            A[i][j]=(rand()%10);
//            printf(" %d ",A[i][j]);
//        }
//        printf("\n");
//    }
//    printf("Ingrese numero a multiplicar: ");
//    scanf("%d",&c);
//    printf("Matriz A luego de multiplicacion escalar por %d:\n",c);
//    mescalar(&A[0][0],m,n,c);
//    for (i=0;i<m;i++)
//    {
//        for(j=0;j<n;j++) printf(" %d ",A[i][j]);
//        printf("\n");
//    }
    return 0;
}
void mescalar (int* p,int m,int n,int c)
{
    int f,i,j;
//    int * a;
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            /*f=p;*/
            *p=*p*c;
            /*f+=sizeof(*p);*/
            /*p=f;*/
//            p+=sizeof(*p);
            p++;
        }
    }
}


int funcion(int * v, int n){
    int i;
    int * p = v;
    for(i=0;i<n;i++){
//        printf("%d\n", v[i]);
//        printf("%d\n", *(v+i));
        printf("%d\n", *(v++));
    }
    printf("\n");
    return 0;
}
