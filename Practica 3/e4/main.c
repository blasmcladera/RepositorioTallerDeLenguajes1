#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct carta_{
    char *palo;
    int numero;
} TCarta;

void inicializarMazo(TCarta[]);
void printMazo(TCarta[]);
void barajarMazo(TCarta[]);
TCarta tomarCarta(TCarta[],int);
void printCarta(TCarta);

int main()
{
    int n;
    srand(time(NULL));
    TCarta mazo[50],carta;
    inicializarMazo(mazo);
    printMazo(mazo);
    printf("----------------------------\n");
    barajarMazo(mazo);
    printMazo(mazo);
    printf("Ingrese numero de carta: \n");
    scanf("%d",&n);
    carta=tomarCarta(mazo,n);
    printCarta(carta);
    return 0;
}

void inicializarMazo(TCarta m[]){
    int i=0;
    for(;i<12;i++){
        m[i].palo="Espadas";
        m[i].numero=i+1;
    }
    for(;i<24;i++){
        m[i].palo="Oro";
        m[i].numero=i-11;
    }
    for(;i<36;i++){
        m[i].palo="Copas";
        m[i].numero=i-23;
    }
    for(;i<48;i++){
        m[i].palo="Basto";
        m[i].numero=i-35;
    }
    for(;i<50;i++){
        m[i].palo="Comodin";
        m[i].numero=-1;
    }
}

void printMazo(TCarta m[]){
    int i=0;
    for (;i<50;i++)printf("Palo: %7s, numero: %2d\n",m[i].palo,m[i].numero);
}

void barajarMazo (TCarta m[]){
    int r,i;
    TCarta aux;
    for (i=0;i<50;i++){
        r=(rand()%50);
        aux=m[r];
        m[r]=m[i];
        m[i]=aux;
    }
}

TCarta tomarCarta (TCarta m[],int n){
    return m[n-1];
}

void printCarta(TCarta c){
    printf("Palo: %7s, numero: %2d\n",c.palo,c.numero);
}
