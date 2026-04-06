#include <stdio.h>

int main()
{
    int x,y,w,h,result_h,result_w;
    scanf("%d %d %d %d",&x,&y,&w,&h);

    if(w-x<x) result_w=w-x;
    else result_w = x;

    if(h-y<y) result_h=h-y;
    else result_h=y;

    if(result_w<result_h) printf("%d",result_w);
    else printf("%d",result_h);

    return 0;
}