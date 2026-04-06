#include <stdio.h>

int main()
{
    char input[8][8];
    int cnt=0;
    for(int i=0;i<8;i++)
    {
        scanf("%s",input[i]);
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(i%2==0 && j%2==0)
            {
                if(input[i][j]=='F') cnt++;
            }
            else if(i%2==1 && j%2 ==1)
            {
                if(input[i][j]=='F') cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}