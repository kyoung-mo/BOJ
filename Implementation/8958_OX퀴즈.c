#include <stdio.h>
#include <string.h>

int main()
{   
    int n;
    scanf("%d",&n);

    char arr[n][81];

    for(int i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int sig=0, pre=0, result=0;
        if(arr[i][0]=='O') 
        {
            pre=1;
            result+=1;
        }
        for(int j=1;j<strlen(arr[i]);j++)
        {
            
            if(arr[i][j-1]==arr[i][j])
            {
                sig=1;
            }
            else if(arr[i][j-1]!=arr[i][j])
            {
                sig=-1;
            }

            if(sig==1&& arr[i][j]=='O') 
            {
                pre++;
                result += pre;
            }
            else if(sig==-1 && arr[i][j]=='X') pre =0;
            else if(sig==1 && arr[i][j]=='X') pre =0;
            else if(sig==-1 && arr[i][j]=='O')
            {
                pre=1;
                result += pre;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}