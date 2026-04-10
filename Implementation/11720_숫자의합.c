#include <stdio.h>
int sq(int, int);
int main()
{
    int cnt,init_num,num,result=0;
    scanf("%d",&cnt);
    scanf("%d",&init_num);
    for(int i=0;i<cnt;i++)
    {
        num=init_num/sq(10,cnt-i-1);
        result+=num;
        init_num-=num*sq(10,cnt-i-1);
    }
    printf("%d",result);
    return 0;
}
int sq(int a, int b)
{
    int result=1;
    for(int i=0;i<b;i++) result*=a;
    return result;
}