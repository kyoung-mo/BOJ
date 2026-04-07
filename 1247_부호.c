#include <stdio.h>

int main()
{
    int amount,cnt=0,zero_count=0;
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
        for(int i=0;i<amount-1;i++)
        {
            if(isplus[amount]==0) zero_count++;
        }
        if(zero_count==amount) printf("+");
    }
    return 0;
}