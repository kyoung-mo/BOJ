#include <stdio.h>

int main()
{
    int cnt,n,min=0,max=0;
    scanf("%d",&cnt);
    for(int i=0;i<cnt;i++)
    {
        scanf("%d ",&n);
        if(min==0 && max==0) 
        {
            min=n;
            max=n;
        }
        if(min>n) min=n;
        else if(max<n) max=n;
    }
    printf("%d %d",min,max);
    return 0;
}