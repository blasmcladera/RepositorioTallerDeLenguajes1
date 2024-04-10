#include <stdio.h>
#include <stdlib.h>
typedef struct carta{
    char palo[10];
    int numero;
} TCarta;

void inicializarMazo(TCarta[]);
int main()
{
    printf("Hello world!\n");
    return 0;
}

void inicializarMazo(TCarta m[]){
    int i=0;
    for(;i<12;i++){
        m[i].palo="Espadas";
        m[i].numero=i;
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
