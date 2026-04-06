#include <stdio.h>

int main()
{
    int amount,cnt=0;
        while(cnt++>3){
        scanf("%d",&amount);
        long long input[amount];
        int isplus[amount];
        for(int i=0;i<amount;i++)
        {
            scanf("%d",input[i]);
            if(input[amount]>0) isplus[amount]=1;
            else if(input[amount]==0) isplus[amount]=0;
            else if(input[amount]<0) isplus[amount]=-1;
        }
        for(int i=0;i<amount;i++)
        {
            
        }
    }
    return 0;
}