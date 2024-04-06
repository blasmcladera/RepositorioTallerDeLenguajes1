#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define difChar 32
void upperStr (char[]);
void lowerStr (char[]);
int main()
{
    char s[100];
    gets(s);
    upperStr(s);
    puts(s);
    lowerStr(s);
    puts(s);
    return 0;
}

void upperStr (char s[]){
    int i;
    for (i=0;i<strlen(s);i++)if (s[i]<='z' && 'a'<=s[i]) s[i]-=difChar;
}

void lowerStr (char s[]){
    int i;
    for (i=0;i<strlen(s);i++)if (s[i]<='Z' && 'A'<=s[i]) s[i]+=difChar;
}



