#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i,j,min,may;
    char* ptr = (char*) calloc(100,sizeof(char));
    for (i=0;i<10;i++){
        gets(ptr);
        min=0;
        may=0;
        for (j=0;j<strlen(ptr);j++){
            if ((*(ptr+j)>='A')&&(*(ptr+j)<='Z')) may++;
            if ((*(ptr+j)>='a')&&(*(ptr+j)<='z')) min++;
        }
        printf("min: %d may: %d \n",min,may);
    }
    free (ptr);
    return 0;

}
