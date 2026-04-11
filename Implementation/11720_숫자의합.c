#include <stdio.h>

int main()
{
    int sum=0, num;
    int cnt;
    scanf("%d",&cnt);

    for(int i=0;i<cnt;i++)
    {
        scanf("%1d",&num);
        sum+=num;
    }
    
        printf("%d",sum);
    return 0;
}