#include <stdio.h>

int main()
{
    int n,f,result=0;
    scanf("%d\n%d",&n,&f);
    n=n-(n%100);
    while(1)
    {
        result+=f;
        if(result>=n) break;
    }
    result%=100;
    printf("%02d",result);
    return 0;
}