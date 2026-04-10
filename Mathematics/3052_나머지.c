#include <stdio.h>

int main()
{
    int num[10], cnt=10;
    for(int i=0;i<10;i++)
    {
        scanf("%d\n",&num[i]);
        num[i]%=42;
        printf("%d\n",num[i]);
    }
    for(int i=0;i<9;i++)
    {
        printf("i = %d \n",i);
        for(int j=i+1;j<10;j++)
        {
            printf("j = %d \n",i);
            
            if(num[i]==num[j]) cnt--;
            if(cnt<=0) break;       
        }
        if(cnt<=10) break;
    }
    printf("%d",cnt);
    return 0;
}