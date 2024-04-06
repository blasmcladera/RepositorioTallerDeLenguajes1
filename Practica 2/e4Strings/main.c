#include <stdio.h>
#include <stdlib.h>
int strlenpropio (char*);
int main()
{
    printf("%d",strlenpropio("Hello world123!"));
    return 0;
}
int strlenpropio (char* s)
{
    int i=0;
    while (s[i]!= 0) i++;
    return i;
}
