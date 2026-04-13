#include <stdio.h>

int main()
{
    int a,b,v;
    scanf("%d %d %d",&a,&b,&v);
    int cnt=1,distance=0;
    if(v/a==0) printf("1");
    else
    {
        cnt+=(v-a)/(a-b);
        if((v-a)%(a-b)!=0) cnt++;
    }
    printf("%d",cnt);
    return 0;
}