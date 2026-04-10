#include <stdio.h>

int main()
{
    int* a;
    int* b;
    int sum=0;
    while((0 < *a && *a < 10) && (0 < *b && *b < 10))
    {
        scanf("%d %d",a, b);
        //if(*(b+4)!='\n') break;
        sum = *a + *b;
        //if(sum>=19 || sum<=0) break;
        printf("%d %d\n",*a,*b);
    }
    return 0; ??
}