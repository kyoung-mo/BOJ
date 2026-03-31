#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    double amount=0;
    char status[3]="0";

    //printf("%lf %s",amount, status);

    while(1){
        scanf("%lf %s",&amount,status);
        if(amount==-1) break;
        if(!strcmp(status,"kg")){
            amount*=2.2046;
            strcpy(status,"lb");
            printf("%.4lf %s",amount, status);
            chk=-1;
        }
        else if(!strcmp(status,"lb")){
            amount*=0.4536;
            strcpy(status,"kg");
            printf("%.4lf %s",amount, status);
            amount=-1;
        }
        else if(!strcmp(status,"l")){
            amount*=0.2642;
            strcpy(status,"g");
            printf("%.4lf %s",amount, status);
            amount=-1;
        }
        else if(!strcmp(status,"g")){
            amount*=3.7854;
            strcpy(status,"l");
            printf("%.4lf %s",amount, status);
            amount=-1;
        }
        else return 0;
    }
    return 0;
}