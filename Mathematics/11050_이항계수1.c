#include <stdio.h>
int factorial(int n)
{
    int result=0;
    if(n<=1) return 1;
    else result = n * factorial(n-1);

    return result;
}

int main()
{
    // 5C2 = 5*4*3*2*1/3*2*1 *2*1
    int n, k;
    scanf("%d %d",&n, &k);
    printf("%d",factorial(n)/(factorial(n-k)*factorial(k)));
    
    return 0;
}