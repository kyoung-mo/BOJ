#include <stdio.h>

int main()
{
    int num=0, before=0, after=0, cnt=1;
    for(int i=0;i<10;i++)
    {
        scanf("%d\n",&num);
        before=num%42;
        if(after == 0 && i==0)
        {
            after = before;
        }
        else if(before!=after)
        {   
            after=before;
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0
}