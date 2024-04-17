#include <stdio.h>
#include <stdlib.h>
typedef enum {DOMINGO=1, LUNES, MARTES, MIERCOLES, VIERNES, SABADO} Dias;
void printDia (int);
int main()
{

    printDia(MIERCOLES);
    return 0;
}

void printDia (int d){
    switch (d)
    {
    case 1: printf("Domingo \n");break;
    case 2: printf("Lunes \n");break;
    case 3: printf("Martes \n");break;
    case 4: printf("Miercoles \n");break;
    case 5: printf("Jueves \n");break;
    case 6: printf("Viernes \n");break;
    case 7: printf("Sabado \n");break;
    default: printf("Error \n");break;
    }
}
