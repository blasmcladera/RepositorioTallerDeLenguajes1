#include <stdio.h>
#include <stdlib.h>

typedef struct rgb24bits{
    unsigned r : 8;
    unsigned g : 8;
    unsigned b : 8;
} RGB24;

typedef struct rgb16bits{
    unsigned r : 5;
    unsigned g : 6;
    unsigned b : 5;
} RGB16;

void conversion24a16 (RGB24*);
void conversion16a24 (RGB16*);

void convertToBinary(unsigned a) {
  if (a > 1) convertToBinary(a / 2);
  printf("%u", a % 2);
}

int main()
{
    RGB16 c;
    c.r=255;
    c.g=255;
    c.b=255;
    convertToBinary(c.r);printf("\n");
    convertToBinary(c.g);printf("\n");
    convertToBinary(c.b);printf("\n");
    conversion16a24(&c);
    printf("Despues de la conversion 24 a 16: \n");
    convertToBinary(c.r);printf("\n");
    convertToBinary(c.g);printf("\n");
    convertToBinary(c.b);printf("\n");
    conversion24a16(&c);
    printf("Despues de la conversion 16 a 24: \n");
    convertToBinary(c.r);printf("\n");
    convertToBinary(c.g);printf("\n");
    convertToBinary(c.b);printf("\n");
    return 0;
}

void conversion24a16 (RGB24* c){
    c->r=((c->r * 31)/255);
    c->g=((c->g * 63)/255);
    c->b=((c->b * 31)/255);
}

void conversion16a24 (RGB16* c){
    c->r=((c->r * 255)/31);
    c->g=((c->g * 255)/63);
    c->b=((c->b * 255)/31);
}
