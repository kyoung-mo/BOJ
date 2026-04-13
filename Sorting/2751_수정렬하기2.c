#include <stdio.h>

int main()
{
    int cnt;
    scanf("%d",&cnt);
    int* num;
    num=(int*)malloc(sizeof(int)*cnt);
    for(int i=0;i<cnt;i++) 
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<cnt-1;i++)
    {
        for(int j=0;j<cnt-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int* temp;
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(int i=0;i<cnt;i++) printf("%d\n",num[i]);
    return 0
    //?
}