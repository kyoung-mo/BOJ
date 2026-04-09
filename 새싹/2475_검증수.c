#include <stdio.h>

int main()
{
    int id[5], result;

    scanf("%d %d %d %d %d",&id[0],&id[1],&id[2],&id[3],&id[4]);
    
    for(int i=0;i<5;i++)
    {
        result += id[i]*id[i];
    }
    result%=10;
    printf("%d",result);

    return 0;
}