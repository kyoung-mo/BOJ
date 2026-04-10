#include <stdio.h>

int main()
{
    int h,w,n,cnt;
    scanf("%d",&cnt);
    for(int i=0;i<cnt;i++)
    {
        scanf("%d %d %d",&h,&w,&n);
        if(n%h==0)
        {
            printf("%d",h);
            if(n/h<10) printf("0"); 
            printf("%d\n",n/h);
        }
        else
        {
            printf("%d",n%h);
            if((n/h+1)<10) printf("0");
            printf("%d\n",n/h +1);
        }
    }
    return 0;
}