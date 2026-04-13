#include <stdio.h>
#include <string.h>

int main()
{
    int cnt;
    scanf("%d",&cnt);

    char str_arr[cnt][50];
    for(int i=0;i<cnt;i++) scanf("%s",str_arr[i]);
    for(int i=0;i<cnt-1;i++)
    {
        for(int j=0;j<cnt-1-i;j++)
        {
            char temp[50];
            if(strlen(str_arr[j])>strlen(str_arr[j+1]))
            {
                strncpy(temp,str_arr[j],sizeof(str_arr[j]));
                strncpy(str_arr[j] , str_arr[j+1],sizeof(str_arr[j+1]));
                strncpy(str_arr[j+1] , temp,sizeof(temp));
            }
            if(strlen(str_arr[j])==strlen(str_arr[j+1]) && strcmp(str_arr[j],str_arr[j+1])>0)
            {
                strncpy(temp,str_arr[j],sizeof(str_arr[j]));
                strncpy(str_arr[j] , str_arr[j+1],sizeof(str_arr[j+1]));
                strncpy(str_arr[j+1] , temp,sizeof(temp));
            }
        }
    }    
    printf("%s\n",str_arr[0]);
    for(int i=0;i<cnt-1;i++)
    {
        if(strcmp(str_arr[i],str_arr[i+1])==0) continue;
        printf("%s\n",str_arr[i+1]);
    }
    return 0;
}
    