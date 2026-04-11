#include <stdio.h>

int main()
{
    int num[5], number;
    scanf("%d %d %d %d %d",&num[0], &num[1], &num[2], &num[3], &num[4]);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            int temp;
            if(num[j]>=num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    number=num[3];
    while(1)
    {
        int cnt=0;
        for(int i=0;i<5;i++)
        {
            if(num[i] % number == 0) cnt++;
        }

        if(cnt>=3) 
        {
            printf("%d",number);
            break;
        }
        number++;
    }

    return 0
}




    // for(int i=0;i<5;i++)
    // {
    //     int cnt=0;
    //     for(int j=0;j<5;j++)
    //     {
    //         if(num[i]%num[j]==0) cnt++;
    //     }
    //     if(cnt>=3)
    //     {
    //         printf("%d",num[i]);
    //         flag=1;
    //         break;
    //     }
    // }