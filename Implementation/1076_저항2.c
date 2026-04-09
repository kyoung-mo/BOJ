#include <stdio.h>
#include <string.h>

void prt_zero(int rep, int result);

int main(){
    char color[10][10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
    char top[10],mid[10],bottom[10];
    int result=0;

    scanf("%s\n%s\n%s",top,mid,bottom);
    
    for(int i=0;i<10;i++)
    {
        if(!strcmp(color[i],top)) result+=i;
    }
    result*=10;
    for(int i=0;i<10;i++)
    {
        if(!strcmp(color[i],mid)) result+=i;
    }
    printf("%d",result);
    for(int i=0;i<10;i++)
    {
        if(!strcmp(color[i],bottom)) prt_zero(i,result);
    }
   
    
    return 0;
}

void prt_zero(int rep, int result){
    int square_result=1;
    if(result==0 || rep==0){}
    else
    {
        for(int i=0;i<rep;i++)printf("0");
    }
}