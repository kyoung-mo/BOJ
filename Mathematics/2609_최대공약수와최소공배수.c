#include <stdio.h>

int main()
{
    int a,b;
    int min_common, result=1;
    scanf("%d %d",&a,&b);
    while(1)
    {
        if(a>b)
        {
            for (int i=b;i>1;i--)
            {
                if(b%i==0 && a%i==0)
                {
                    min_common=i;
                    printf("%d\n",i);
                    break;
                }     
            }
            break;
        }
        else
        {
            int temp;
            temp = a;
            a=b;
            b=temp;
        }
    }
    
    if(a/min_common==0 && b/min_common ==0) result= min_common;
    else if(a/min_common==0 && b/min_common !=0) result = (b/min_common) * min_common;
    else if(a/min_common!=0 && b/min_common ==0) result = (a/min_common) * min_common;
    else  result=(a/min_common) * (b/min_common) * min_common;
    printf("%d",result);

    return 0
}