#include <stdio.h>

int main()
{
    char* s; 
    int n;
    scanf("%s\n%d",s,&n);
    printf("%c",*(s+n-1));

    return 0;
}