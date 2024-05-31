#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fTxt = fopen("numeros.txt","w");
    FILE* fBin = fopen("numeros.dat","wb");

    if (fTxt==NULL||fBin==NULL){
        printf("Error");
        return -1;
    }

    char n;
    scanf("%c",&n);
    while (n!='z'){
        fputc(n,fTxt);
        fwrite(&n,sizeof(char),1,fBin);
        scanf("%c",&n);
    }


    return 0;


}
