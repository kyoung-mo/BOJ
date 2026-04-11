#include <stdio.h>
#include <string.h>

int main()
{
    char alp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int result[26];
    for(int i=0;i<26;i++)
    {
        result[i]=-1;
    }
    char word[100];
    scanf("%s",word);

    for(int i=0;i<26;i++)
    {
        for(int j=0;j<strlen(word);j++)
        {
            //printf("word[%d] = %c , alp[%d] = %c\n",j,word[j],i,alp[i]);
            if(word[j]==alp[i] && result[i]==-1) result[i]=j;
        }
    }

    for(int i=0;i<26;i++)
    {
        printf("%d ",result[i]);
    }

    return 0;
}