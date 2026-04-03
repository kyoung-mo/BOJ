#include <stdio.h>

int main(){
    int cnt=0;
    int a=0,b=0,last_num=1;

    scanf("%d",&cnt);

    for(int i=0;i<cnt;i++){
        scanf("%d %d",&a,&b);

        for(int i=0;i<b;i++){
            last_num*=a;
            last_num=last_num%10;
            if(last_num==0)
            {
                last_num=10;
                break;
            }
            
        }
        printf("%d\n",last_num);
        last_num=1;
    }
    return 0;
}