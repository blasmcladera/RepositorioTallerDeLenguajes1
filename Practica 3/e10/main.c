#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void convertToBinary(int a) {
  if (a > 1) convertToBinary(a / 2);
  printf("%d", a % 2);
}

void activarModulo (int *b){
    printf("Modulo a activar (Bluetooth=7 ,Wifi=6 ,GPS=5 ,Datos=4 ,Frontal=3 ,Trasera=2 ,Linterna=1 ,Vibrar=0): \n");
    int aux;
    scanf("%d",&aux);
    *b+=1<<aux;
}

void desactivarModulo (int *b){
    printf("Modulo a desactivar (Bluetooth=7 ,Wifi=6 ,GPS=5 ,Datos=4 ,Frontal=3 ,Trasera=2 ,Linterna=1 ,Vibrar=0): \n");
    int aux;
    scanf("%d",&aux);
    *b-=1<<aux;
}

void cambiarModulos (int *b){
    int aux;
    printf("DESACTIVAR (0), ACTIVAR (1), SALIR (-1):");
    scanf("%d",&aux);
    while (aux!=-1){
        if (aux) activarModulo(b);
        else desactivarModulo(b);
        printf("Estado del telefono: \n");
        convertToBinary(*b);printf("\n");
        printf("DESACTIVAR (0), ACTIVAR (1), SALIR (-1):");
        scanf("%d",&aux);
    }
}

void invertirModulo (int *b){
    printf("Modulo a invetir (Salir=-1;Bluetooth=7 ,Wifi=6 ,GPS=5 ,Datos=4 ,Frontal=3 ,Trasera=2 ,Linterna=1 ,Vibrar=0): \n");
    int aux;
    scanf("%d",&aux);
    if ((*b - (1<<aux))<0)*b+=1<<aux;
    else *b-=1<<aux;
}

typedef enum {Bluetooth=128 ,Wifi=64 ,GPS=32 ,Datos=16 ,Frontal=8 ,Trasera=4 ,Linterna=2 ,Vibrar=1} Telefono;
int main()
{
    int const todoOn=(Bluetooth+Wifi+GPS+Datos+Frontal+Trasera+Linterna+Vibrar);
    int const todoOff=0;
    Telefono tel=todoOff;
    cambiarModulos(&tel);
    convertToBinary(tel);printf("\n");
    invertirModulo(&tel);
    convertToBinary(tel);
    return 0;
}
