#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct circulo{
    double radio;
}TCirculo;

typedef struct elipse{
    double a;
    double b;
}TElipse;

typedef struct triangulo{
    double lado1;
    double lado2;
    double lado3;
}TTriangulo;

typedef struct cuadrado{
    double lado;
}TCuadrado;

typedef struct rectangulo{
    double altura;
    double base;
}TRectangulo;

typedef union figuras{
    TCirculo    ci;
    TElipse     el;
    TTriangulo  tr;
    TCuadrado   cu;
    TRectangulo re;
}TFigura;

typedef struct figuraGeometrica{
    int id;
    TFigura tipo;
} TFGeo;

float calcularArea (TFGeo f){
    switch (f.id){
    case 1 : return (3.14*f.tipo.ci.radio);break;
    case 2 : return (3.14*f.tipo.el.a*f.tipo.el.b);break;
    case 3 : return (0.25*sqrt(4*pow(f.tipo.tr.lado1,2)*pow(f.tipo.tr.lado2,2)-(pow(pow(f.tipo.tr.lado1,2)+pow(f.tipo.tr.lado2,2)-pow(f.tipo.tr.lado3,2),2))));break;
    case 4 : return (f.tipo.cu.lado*f.tipo.cu.lado);break;
    case 5 : return (f.tipo.re.altura*f.tipo.re.base);break;
    default: return 0;
    }
}


int main()
{
    TFGeo f;
    f.id=3;
    f.tipo.tr.lado1=2;
    f.tipo.tr.lado2=3;
    f.tipo.tr.lado3=4;
    printf("%.2f",calcularArea(f));
    return 0;
}
