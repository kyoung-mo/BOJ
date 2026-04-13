#include <stdio.h>

int main()
{
    int num, sq=1, result=0;
    char word[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char temp;
    scanf("%d",&num);

    for(int i=0;i<=num;i++)
    {
        scanf("%c",&temp);
        for(int j=0;j<26;j++)
        {
            if(word[j]==temp) 
            {
                result%=1234567891;
                sq%=1234567891;
                result += (j+1)*sq;
                result%=1234567891;
                sq*=31;
                sq%=1234567891;
            }
        }
        result%=1234567891;
    }
    result%=1234567891;
    printf("%d",result);

    return 0;
}