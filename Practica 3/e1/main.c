#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define D 10

typedef struct rectangulo{
        float base;
        float altura;
    } TRec;

void inicializarRec(TRec*);
void inicializarRecRand(TRec*);
float calcularArea(TRec);
void calcularMax(TRec[],int*,float*);

int main()
{
    srand(time(NULL));
    TRec rec;
    int i,mr;
    float ma=99999;
    inicializarRec(&rec);
    printf("Area: %.2f \n",calcularArea(rec));
    TRec array[D];
    for (i=0;i<D;i++) inicializarRecRand(&array[i]);
    calcularMax(array,&mr,&ma);
    printf("Rectangulo %d area: %.2f \n",mr,ma);
    return 0;
}

void inicializarRec(TRec *p){
    printf("Ingrese base: \n");
    scanf("%f",&(p->base));
    printf("Ingrese altura: \n");
    scanf("%f",&(p->altura));
}

void inicializarRecRand(TRec *p){
    printf("Base: \n");
    p->base=(1+(rand()%11));
    printf("%0.2f\n",p->base);
    printf("Altura: \n");
    p->altura=(1+(rand()%11));
    printf("%0.2f\n",p->altura);
}

float calcularArea(TRec p){
    return (p.base*p.altura);
}

void calcularMax(TRec p[],int* mr,float* ma){
    int i;
    for (i=0;i<D;i++){
        if (calcularArea(p[i])<= *ma){
            *ma= calcularArea(p[i]);
            *mr=i;
        }
    }
}
