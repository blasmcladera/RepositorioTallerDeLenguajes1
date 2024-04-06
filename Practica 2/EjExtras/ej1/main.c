#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define D 10
void inicializarV(int[]);
void imprimirV(int[]);
void ordenarV(int[]);
int main(){
    int v[D];
    inicializarV(v);
    imprimirV(v);
    ordenarV(v);
    imprimirV(v);
    return 0;
}

void inicializarV(int v[]){
    srand(time(NULL));
    int i;
    for (i=0;i<D;i++) v[i]=(rand()%100);
}

void imprimirV(int v[]){
    int i;
    for(i=0;i<D;i++) printf("%d  ",v[i]);
    printf("\n");
}

void ordenarV(int v[]){
    int i,j,aux,aux2,aux3;
    for (i=0;i<D;i++){
        aux=101;
        for (j=i;j<D;j++){
            if (v[j]<aux){
                aux=v[j];
                aux2=j;
            }
        }
        aux3=v[aux2];
        v[aux2]=v[i];
        v[i]=aux3;
    }
}



