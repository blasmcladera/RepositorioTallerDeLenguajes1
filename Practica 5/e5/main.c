#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* f = fopen("archivo.txt","r");

    if (f==NULL) return -1;

    char** ptrs=NULL;
    char str[50];
    int b,i,cant=0;

    fscanf(f,"%s",str);
    while (!feof(f)){
        ptrs = (char**)realloc(ptrs,sizeof(char*)*(cant+1));
        ptrs[cant] = (char*)malloc(strlen(str)+1);
        strcpy(ptrs[cant++],str);
        fscanf(f,"%s",str);
    }
    for (i=0;i<cant;i++) printf("%s\n",ptrs[i]);

    scanf("%s",str);
    while (strcmp(str,"ZZZ")){
        b=1;
        for (i=0;i<cant;i++){
            if (!strcmp(str,ptrs[i])){
                printf("La palabra '%s' pertenece al diccionario.\n",str);
                b=0;
                break;
            }
        }
        if (b) printf("La palabra '%s' no pertenece al diccionario.\n",str);
        scanf("%s",str);
    }
    fclose(f);
    for (i=0;i<cant;i++){
        free (ptrs[i]);
    }
    free (ptrs);
    return 0;

}
