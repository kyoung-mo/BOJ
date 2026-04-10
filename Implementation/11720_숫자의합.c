#include <stdio.h>
int cut(int repeat);
int main()
{
    int cnt,num,result=0;
    scanf("%d",&cnt);
    
        scanf("%d",num);
    for(int i=0;i<cnt;i++)
    {
        result+=(num/(cut(cnt)));
        num-=(num/(cut(cnt)));
    }
    printf("%d",result);
    return 0;
}
int cut(int repeat)
{
    int result=10,cnt=1;
    while(1)
    {
        if(cnt>=repeat) break;
        result*=10;
        cnt++;
    }
    return result;
}