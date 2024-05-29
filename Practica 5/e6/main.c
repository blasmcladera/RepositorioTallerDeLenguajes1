#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f = fopen("vinos.csv","r");

    if (f==NULL) return -1;
    char str[20];
    int i,j,cant=0;
    float n,calculos[3][8]={0};
    for (i=0;i<8;i++) calculos[2][i]=99999999;
    //Imprimo titulos;
    for (i=0;i<8;i++){
            fscanf(f,"%[^;];",str);
            //printf("%12s",str);
    }
    fscanf(f,"%s",str);
    //printf("%12s\n",str);

    while (!feof(f)){
        for(i=0;i<8;i++){
            fscanf(f,"%f;",&n);
            //printf("%12.2f",n);
            calculos[0][i]+=n;
            if (n>calculos[1][i]) calculos[1][i]=n;
            if (n<calculos[2][i]) calculos[2][i]=n;
        }
        fscanf(f,"%s",str);
        //printf("%12s\n",str);
        cant++;
    }

    for(i=0;i<8;i++)calculos[0][i]/=cant;

    fseek(f,0,SEEK_SET);
    for (i=0;i<8;i++){
            fscanf(f,"%[^;];",str);
            printf("%12s",str);
    }

    printf("\n");
    for (i=0;i<3;i++){
        for (j=0;j<8;j++){
            printf("%12.2f",calculos[i][j]);
        }
        printf("\n");
    }


    return 0;
}
