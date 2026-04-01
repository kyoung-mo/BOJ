// https://www.acmicpc.net/problem/2712
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    double amount=0;
    char status[3] ={0} ;
    int cnt=-1;
    scanf("%d",&cnt);
    if(cnt==-1) return -1;
    //printf("%lf %s",amount, status);

    for(int i=0;i<cnt;i++){
        scanf("%lf %s",&amount,status);
        if(amount==-1) break;


        if(status=="kg")

        if(!strcmp(status,"kg")){
            amount*=2.2046;
            strcpy(status,"lb");
            printf("%.4lf %s\n",amount, status);
        }
        else if(!strcmp(status,"lb")){
            amount*=0.4536;
            strcpy(status,"kg");
            printf("%.4lf %s\n",amount, status);
        }
        else if(!strcmp(status,"l")){
            amount*=0.2642;
            strcpy(status,"g");
            printf("%.4lf %s\n",amount, status);
        }
        else if(!strcmp(status,"g")){
            amount*=3.7854;
            strcpy(status,"l");
            printf("%.4lf %s\n",amount, status);
        }
        else return 0;
    }
    return 0;
}

//strcpy