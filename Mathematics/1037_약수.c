#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cnt, result;
    int* num_list;
    scanf("%d",&cnt);
    num_list=(int*)malloc(sizeof(int)*cnt);

    for(int i=0;i<cnt;i++) 
    {
        scanf("%d ",&num_list[i]);
    }

    for(int i=0;i<cnt-1;i++)
    {
        for(int j=0;j<cnt-1-i;j++)
        {
            int temp;
            if(num_list[j]>num_list[j+1])
            {
                temp=num_list[j];
                num_list[j]=num_list[j+1];
                num_list[j+1]=temp;
            }
        }
    }

    printf("%d",num_list[0]*num_list[cnt-1]);
    free(num_list);
    return 0;
}