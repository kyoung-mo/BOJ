#include <stdio.h>
#include <string.h>

int main(){
    
    char color[10];
    int cnt=0,b_cnt=0,b_chk=-1;

    for(int i=0;i<3;i++){
        scanf("%s",color);
        if(b_cnt==2)
        {
            printf("0");
            break;
        }
        else if(!strcmp(color,"black")){
            if(i==1&&b_cnt==0) 
            {
                printf("0");
                b_chk=1;
            }
            b_cnt++;
        }
        else if(!strcmp(color,"brown")){
            if(i==2)printf("0");
            else printf("1");
        }
        else if(!strcmp(color,"red")){
            if(i==2)printf("00");
            else printf("2");
        }
        else if(!strcmp(color,"orange")){
            if(i==2)printf("000");
            else printf("3");
        }
        else if(!strcmp(color,"yellow")){
            if(i==2)printf("0000");
            else printf("4");
        }
        else if(!strcmp(color,"green")){
            if(i==2)printf("00000");
            else printf("5");
        }
        else if(!strcmp(color,"blue")){
            if(i==2)printf("000000");
            else printf("6");
        }
        else if(!strcmp(color,"violet")){
            if(i==2)printf("0000000");
            else printf("7");
        }
        else if(!strcmp(color,"grey")){
            if(i==2)printf("00000000");
            else printf("8");
        }
        else if(!strcmp(color,"white")){
            if(i==2)printf("000000000");
            else printf("9");
        }
    }

    return 0;
}