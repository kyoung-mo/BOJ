// https://www.acmicpc.net/problem/1247
#include <stdio.h>

int main()
{
    for(int k=0;k<3;k++)
    {
        int amount;
        scanf("%d",&amount);

        long long val[amount];
        long long plus[amount];
        long long minus[amount];
        long long result=0;
        int cnt_p=0,p=0;
        int cnt_m=0,m=0;
        int cnt_z=0;
        for(int i=0;i<amount;i++)
        {
            scanf("%lld",&val[i]);
            if(val[i]>0) plus[cnt_p++]=val[i];
            else if(val[i]<0) minus[cnt_m++]=val[i];
        }
        if(cnt_m==0 && cnt_p==0)
        {
            printf("0\n");
            continue;
        }        
        else if(cnt_m==0) 
        {
            printf("+\n");
            continue;
        }
        else if(cnt_p==0) 
        {
            printf("-\n");
            continue;
        }    
        else
        {
            while(1)
            {
                if(p==cnt_p && m==cnt_m) 
                {
                    break;
                }
                else if(result>0) 
                {
                    while(1)
                    {   
                        if(m==cnt_m || result<=0 ) break;
                        result += minus[m++];
                    }
                    if(result<=0) continue;
                    else if(m==cnt_m) break;
                } 
                else if(result<0) 
                {
                    while(1)
                    { 
                        if(p==cnt_p || result>=0) break;
                        result += plus[p++];
                    }
                    if(result>=0) continue;
                    else if(p==cnt_p) break;
                }
                else 
                {
                    if(p==cnt_p || m==cnt_m) break;
                    result = plus[p++] + minus[m++];
                }
            }
            if(p==cnt_p && m==cnt_m)
            {
                if(result > 0) printf("+\n");
                else if(result < 0) printf("-\n");
                else printf("0\n");
            }
            else if(p == cnt_p && m < cnt_m) printf("-\n");
            else if(p < cnt_p && m == cnt_m) printf("+\n");
            
        }
    }
    return 0;
}