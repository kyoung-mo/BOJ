#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    double amount;
    char status[10]={0};

    scanf("%lf %s",&amount,status);

    if(*status=="kg"){
        amount*=2.2046;
        *status="lb";
        printf("%.4lf %s\n",amount, status);
    }
     if(*status=="l"){
        amount*=0.2642;
        *status="g";
        printf("%.4lf %s\n",amount, status);
    }
    else if(*status=="lb"){
        amount*=0.4536;
        *status="kg";
        printf("%.4lf %s\n",amount, status);
    }
    else if(*status=="g"){
        amount*=3.7854;
        *status="l";
        printf("%.4lf %s\n",amount, status);
    }
    else return -1;

    return 0;
}