#include <stdio.h>
int num_upper(int, int);
int main()
{
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    printf("%d\n",a+b-c);
    a=num_upper(a,b);
    printf("%d",a+b-c);
    return 0;
}
int num_upper(int a, int b)
{
    int result=0;
    if(b/1000==1) return a*10000;
    else if(b/100!=0) return a*1000;
    else if(b/10!=0) return a*100;
    else return a*10;
}