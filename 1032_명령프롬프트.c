#include <stdio.h>
int main(){
    int amount;
    scanf("%d",&amount);

    char list[amount][51];
    char result[51];
    for(int i=0;i<amount;i++)
    {
        scanf("%s",list[i]);
    }
    for(int i=0;i<amount;i++)
    {
        for(int j=0;j<51;j++){
            if(result[j]!=list[i][j] && i>0)
            {
                result[j]='?';
            }
            else result[j]=list[i][j];
            if(list[i][j]=='\0') break;
        }

    }
    printf("%s",result);
    
    return 0;
}