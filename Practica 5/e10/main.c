#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Jugador{
    char nya[20];
    int edad;
    int titulos;
    int ranking;
    int fortuna;

} Jugador;

int actualizarRanking(char n[],int r,FILE* f){
    rewind(f);
    int aux=0;
    Jugador j;
    fread(&j,sizeof(Jugador),1,f);
    while (!feof(f)){
        if (strcmp(j.nya,n)==0){
            j.ranking=r;
            fseek(f,-sizeof(Jugador),SEEK_CUR);
            fwrite(&j,sizeof(Jugador),1,f);
            aux=1;
            break;
        }
        fread(&j,sizeof(Jugador),1,f);
    }
    rewind(f);
    return aux;
}

void imprimirArchivo(FILE* f){
    Jugador j;
    rewind(f);
    fread(&j,sizeof(Jugador),1,f);
    while (!feof(f)){
        printf("Nya:%s, edad: %d, titulos: %d, ranking: %d, fortuna: %d.\n",j.nya,j.edad,j.titulos,j.ranking,j.fortuna);
        fread(&j,sizeof(Jugador),1,f);
    }
}
int main()
{
    FILE* fBin = fopen("datos.dat","r+b");
    if (fBin==NULL){
        printf("ERROR");
        return -1;
    }
    imprimirArchivo(fBin);
    if (actualizarRanking("a",98,fBin)) printf("Exito.\n");
    else printf("No se pudo.\n");
    imprimirArchivo(fBin);
    return 0;
}
