#include <stdio.h>
int num_upper(int);
int main()
{
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    printf("%d\n",a+b-c);
    a=num_upper(a);
    printf("%d",a+b-c);
    return 0;
}
int num_upper(int n)
{
    int result=0;
    if(n/1000==1) return n*10000;
    else if(n/100!=0) return n*1000;
    else if(n/10!=0) return n*100;
    else return n*10;
}