#include <stdio.h>
#include <stdlib.h>
typedef struct horaBits{
    unsigned h : 5;
    unsigned m : 6;
} THora;
void leerHora(THora *);
void imprimirHora(THora);
int main()
{
    THora h;
    leerHora(&h);
    imprimirHora(h);
    return 0;
}

void leerHora(THora * p){
    unsigned aux;
    printf("HORAS ERRONEAS = [00:00].\nIngrese hora: \n");
    scanf("%u",&aux);
    if (aux>23) aux=0;
    p->h=aux;
    printf("Ingrese minutos: \n");
    scanf("%u",&aux);
    if (aux>59) aux=0;
    p->m=aux;
}

void imprimirHora(THora p){
    printf("Hora: [%u:%u]",p.h,p.m);
}
