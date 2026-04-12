#include <stdio.h>
#include <string.h>

int main()
{
    int cnt,chk=0;
    scanf("%d",&cnt);

    while(1)
    {
        int len;
        char* str;
        str = (char*)malloc(sizeof(char));
        scanf("%d %s",&len,str);
        //printf("len : %d, str : %s\n",len, str);
        for(int j=0;j<strlen(str);j++)
        {
            for(int k=0;k<len;k++)
            {
                printf("%c",str[j]);
            }
        }
        printf("\n");
        chk++;
        if(chk>=cnt) break;
    }

    return 0;
}