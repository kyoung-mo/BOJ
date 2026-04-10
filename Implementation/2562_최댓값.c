#include <stdio.h>

int main()
{
    int num[9],cnt=0,max;
    scanf("%d",&num[0]);
    max=num[0];
    for(int i=1;i<9;i++)
    {
        scanf("%d",&num[i]);
        if(num[i] > max) max=num[i];
    }
    for(int i=0;i<9;i++)
    {
        if(max==num[i]) cnt=i+1;
    }
    printf("%d\n%d",max,cnt);
    return 0;
}