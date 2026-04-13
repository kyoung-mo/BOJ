#include <stdio.h>
int main()
{
    while(1)
    {
        
        int num;
        scanf("%d",&num);
        if(num==0) break;
        else if(num>10000)
        {
            if((num/10000==num%10) && (((num%10000)/1000) ==((num%100)/10))) printf("yes\n");
            else printf("no\n");
        }
        else if(num>1000)
        {
            if((num/1000==num%10) && ((num%1000)/100 ==(num%100)/10)) printf("yes\n");
            else printf("no\n");
        }
        else if(num>100)
        {
            if(num/100==num%10) printf("yes\n");
            else printf("no\n");
        }
        else if(num>10)
        {
            if(num/10==num%10) printf("yes\n");
            else printf("no\n");
        }
        else printf("yes\n");
    }
    return 0;
}