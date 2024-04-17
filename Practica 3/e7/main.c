#include <stdio.h>
#include <stdlib.h>
#include <string.h>
union identificacion{
    int dni;
    char pasaporte[10];
};
typedef struct infoGeneral{
    char apellido[20];
    char nombre[20];
    int legajo;
    union identificacion id
}alumno;
int main()
{
    int aux;
    alumno alu;
    printf("Ingrese apellido: ");
    gets(alu.apellido);
    printf("Ingrese nombre: ");
    gets(alu.nombre);
    printf("Ingrese legajo: ");
    scanf("%d",&alu.legajo);
    printf("DNI (0) o PASAPORTE (1): ");
    scanf("%d",&aux);
    if (aux) {
        printf("Ingrese PASAPORTE: ");
        scanf("%s",alu.id.pasaporte);
    }
    else {
        printf("Ingrese DNI: ");
        scanf("%d",&alu.id.dni);
    }
    return 0;
}
