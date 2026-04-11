#include <stdio.h>

int main()
{
    int num, val, remain=0, cnt=0;
    scanf("%d",&num);

    while(1)
    {
        remain = num%2;
        if(remain == 1) 
        {
            cnt++;
            //printf(" (1) num = %d, remain = %d, cnt = %d\n",num, remain, cnt);
        }
        if(num==1) 
        {
            //printf(" (2) num = %d, remain = %d, cnt = %d\n",num, remain, cnt);
            break;
        }
         num = num/2;
    }
    printf("%d",cnt);
    return 0;
}