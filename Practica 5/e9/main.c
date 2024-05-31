#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define numero 3
typedef struct _Jugador{
    char nya[20];
    int edad;
    int titulos;
    int ranking;
    int fortuna;

} Jugador;

Jugador crearJugador(){
    Jugador j;
    char str[20];
    int n;
    printf("Ingrese nya:");
    scanf("%s",str);strcpy(j.nya,str);
    printf("Ingrese edad:");
    scanf("%d",&n);j.edad=n;
    printf("Ingrese titulos:");
    scanf("%d",&n);j.titulos=n;
    printf("Ingrese ranking:");
    scanf("%d",&n);j.ranking=n;
    printf("Ingrese fortuna:");
    scanf("%d",&n);j.fortuna=n;
    printf("\n");
    return j;
}

int main()
{
    FILE* fBin = fopen("datos.dat","w+b");
    if (fBin==NULL){
        printf("ERROR");
        return -1;
    }

    int i;
    Jugador Jugadores[numero];
    for(i=0;i<numero;i++) Jugadores[i]=crearJugador();
    fwrite(Jugadores,sizeof(Jugador),numero,fBin);
    rewind(fBin);

    char nr[20],nt[20];
    int rMax=999999;
    int tMax=-1;
    Jugador jActual;
    fread(&jActual,sizeof(Jugador),1,fBin);
    while (!feof(fBin)){
        if (jActual.ranking<rMax){
            strcpy(nr,jActual.nya);
            rMax=jActual.ranking;
        }
        if (jActual.titulos>tMax){
            strcpy(nt,jActual.nya);
            tMax=jActual.titulos;
        }
        fread(&jActual,sizeof(Jugador),1,fBin);
    }

    printf("%s  %d\n%s %d",nr,rMax,nt,tMax);
    fclose(fBin);
    return 0;
}
