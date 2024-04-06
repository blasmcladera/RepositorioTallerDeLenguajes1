/*a.*/
#include <stdio.h>
int main(){
int edad; /* falta scan */
scanf("%d", &edad);
if (edad >= 40) /* if no lleva ;*/
    printf("Tiene %d años o más",40); /*en el print no se usa &*/
else
    printf("Tiene menos de %d años",40);
return 0;
}
