#include <stdio.h>

int main()
{
    int cnt;
    scanf("%d",&cnt);
    for(int i=0;i<cnt;i++)
    {
        for(int j=cnt;j>0;j--)
        {
            if(i>=j-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}