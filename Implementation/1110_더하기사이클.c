#include <stdio.h>

int main(){

    int init,a,b,sum,result,cnt=1;

    scanf("%d",&init);
    if(init==0) 
    {
        printf("1");
        return 0;
    }
    else if(init<10)
    {
        a=0;
        b=init;
    }
    else
    {
        a=init/10;
        b=init%10;
    }
    while(1)
    {
        sum = a+b;
        a=b;
        b=sum%10;
        result = a*10+b;
        if(init==result) break;
        cnt++;
    }
    printf("%d",cnt);

    return 0;
}