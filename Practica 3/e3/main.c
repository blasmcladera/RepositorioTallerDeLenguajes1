#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*puntero a alumno A.
(*A).campo
A->campo_estructura.campo_int = 3*/
typedef struct direccion{
    char calle[50];
    char ciudad[30];
    int codigo_postal;
    char pais[40];
}TDirec;

typedef struct alu{
    char apellido[50];
    char nombre[50];
    char legajo[8];
    float promedio;
    TDirec domicilio;
}alumno;

void inicializarAlumno(alumno*);
void printAlumno(alumno a);
void calcularMaximo(alumno[]);

int main()
{
    int i;
    alumno a;
    inicializarAlumno(&a);
    printAlumno(a);
    alumno b[30];
    for (i=0;i<30;i++) inicializarAlumno(&b[i]);
    calcularMaximo(b);
    return 0;
}

void calcularMaximo(alumno a[]){
    int i;
    char s[50],n[50];
    float p=-1;
    for (i=0;i<30;i++){
        if (a[i].promedio>p){
            p=a[i].promedio;
            strcpy(s,a[i].apellido);
            strcpy(n,a[i].nombre);
        }
    }
    printf("Nombre y Apellido: %s %s, promedio maximo: %f ",n,s,p);
}

void inicializarAlumno(alumno *a){
    printf("Ingrese apellido: \n");
    scanf("%s",a->apellido);
    printf("Ingrese nombre: \n");
    scanf("%s",a->nombre);
    printf("Ingrese legajo: \n");
    scanf("%s",a->legajo);
    printf("Ingrese promedio: \n");
    scanf("%f",&(a->promedio));
    printf("Ingrese calle: \n");
    scanf("%s",a->domicilio.calle);
    printf("Ingrese ciudad: \n");
    scanf("%s",a->domicilio.ciudad);
    printf("Ingrese codigo postal: \n");
    scanf("%d",&(a->domicilio.codigo_postal));
    printf("Ingrese pais: \n");
    scanf("%s",a->domicilio.pais);
}

void printAlumno(alumno a){
    printf("Apellido: %s \n",a.apellido);
    printf("Nombre: %s\n",a.nombre);
    printf("Legajo: %s\n",a.legajo);
    printf("Promedio : %f \n",a.promedio);
    printf("Calle: %s\n",a.domicilio.calle);
    printf("Ciudad: %s\n",a.domicilio.ciudad);
    printf("Codigo postal: %d \n",a.domicilio.codigo_postal);
    printf("Pais: %s\n",a.domicilio.pais);
}
