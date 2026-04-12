#include <stdio.h>

int main()
{
    int a,b,c,result;
    int num[10] = {0,0,0,0,0,0,0,0,0,0};
    int max=1000000000;
    scanf("%d\n%d\n%d",&a,&b,&c);
    result=a*b*c;
    //printf("result = %d, max = %d\n",result, max);
    while(1)
    {
        if(max>result) max/=10;
        else break;
    }
    //printf("result = %d, max = %d\n",result, max);
    
        int cnt=0;
    while(1)
    {
        if(max==0) break;
        int idx;
        idx =result/max;
        //printf("[ idx = %d ] result = %d, max = %d\n",idx,result, max);
        for(int i=0;i<10;i++)
        {
            if(idx==i) num[i]+=1;
        }
        result%=max;
        max/=10;
        
        //printf("[ cnt = %d ] result = %d, max = %d\n",cnt++,result, max);
    }
    for(int i=0;i<10;i++) printf("%d\n",num[i]);

    return 0;
}