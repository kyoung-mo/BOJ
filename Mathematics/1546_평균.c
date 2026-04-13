#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    double max=0, average=0;
    scanf("%d",&num);
    double* score;
    score = (double*)malloc(sizeof(double)*num);

    for(int i=0;i<num;i++)
    {
        scanf("%d",&score[i]);
        if(score[i]>max) max=score[i];
    }
    for(int i=0;i<num;i++)
    {
        score[i] = score[i]/max*100;
        average+=score[i];
    }
    printf("%.3lf",average/num);

    return 0;
}