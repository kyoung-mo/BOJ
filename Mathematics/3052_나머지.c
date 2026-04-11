#include <stdio.h>

int main()
{
    int num[10], cnt=10;
    for(int i=0;i<10;i++)
    {
        scanf("%d\n",&num[i]);
        num[i]%=42;
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            int temp;
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        if(num[i]==num[i+1])
        {
            cnt--;
            continue;
        }     
    }
    printf("%d",cnt);
    return 0;
}