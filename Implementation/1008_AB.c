#include <stdio.h>

int main(){
    char a[10],b[10];
    scanf("%s %s",a,b);
    printf("%lf",((double)*a/(double)*b));

    return 0;
}