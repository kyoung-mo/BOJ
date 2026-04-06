#include <stdio.h>

int main()
{
    for(int k=0;k<3;k++)
    {
        long long result=0, value[3];
        int amount, cnt=0;
        scanf("%d",&amount);
        for(int i=0;i<amount;i++)
        {
            scanf("%d",value[i]);
            if(value[i]>0) cnt++;
            else if(value[i]<0) cnt--;
        }
        if(cnt>0) printf("+\n");
        else if(cnt<0) printf("-\n");
        else
        {
            result=value[1]+value[2]+value[3];
            if(result>0) printf("+\n");
            else if(result<0) printf("-\n");
            else printf("0\n");
        }
        
    }
    return 0;
}