#include <stdio.h>
#include <stdlib.h>

typedef struct dataSeparada{
    double x;
    double y;
    double ancho;
    double alto;
} TSep;

typedef struct dosPuntos{
    double p1[2];
    double p2[2];
} TPuntos;

typedef struct todoJunto{
    double p[4];
} TJunto;

typedef union rectangulo{
    TSep separadas;
    TPuntos puntos;
    TJunto todo;
} TRec;

int main()
{
    TRec rec;
    printf("%d",sizeof(rec));
    return 0;
}
