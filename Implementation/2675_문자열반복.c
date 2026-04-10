#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++
    {
        int r,cnt=0;
        char* str;
        scanf("%d %s",&r,str);
        int len=strlen(str);
        for(int j=0;j<len;j++)
        {
            for(int k=0;k<r;k++) 
            {
                printf("%c",str[j]);
                cnt++;
                if(cnt==r) 
                {
                    cnt=0;
                    break;
                }
            }
        }
        printf("\n");
        
    }
    return 0;
}