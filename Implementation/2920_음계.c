#include <stdio.h>

int main()
{
    int sound[8];
    int status=0;
    for(int i=0;i<9;i++)
    {
        scanf("%d ",&sound[i]);
        if(sound[i]==i+1) status++;
        else if(sound[i]== 8-i) status--;
    }

    if(status == 8) printf("ascending");
    else if(status == -8) printf("descending");
    else printf("mixed");
    
    return 0;
}