#include <stdio.h>
#include <string.h>

int main()
{
    int cnt=0; 
    char* str;
    while(scanf("%s",str)!=-1) 
    {
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}