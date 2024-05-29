#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE* fo = fopen("ORIGEN.txt","r");
    FILE* fd = fopen("DESTINO.txt","w");

    if (fo==NULL || fd==NULL){
        printf("ERROR");
        return -1;
    }

    //FGETC y FPUTC:
//    fputc(fgetc(fo),fd);
//    while (!feof(fo))fputc(fgetc(fo),fd);

    //FGETS y FPUTS:
//    fseek(fo,0,SEEK_END);
//    int tamanio = ftell(fo);
//    printf("%d",tamanio);
//    rewind(fo);
//    char str[tamanio/sizeof(char)];
//    fgets(str,tamanio/sizeof(char),fo);
//    while (!feof(fo)){
//            fputs(str,fd);
//            fgets(str,tamanio/sizeof(char),fo);
//    }
//    fputs(str,fd);

    //FWRITE y FREAD:
    fseek(fo,0,SEEK_END);
    int tamanio = ftell(fo);
    printf("%d",tamanio);
    rewind(fo);

    char str[tamanio/sizeof(char)];
    fread(str,sizeof(char),tamanio/sizeof(char),fo);
    fwrite(str,sizeof(char),tamanio/sizeof(char),fd);

    fclose(fo);
    fclose(fd);

    return 0;
}
