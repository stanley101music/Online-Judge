#include<stdio.h>

int main(void)
{
    int score;
    scanf("%d",&score);
    score=score*4/5+30;
    if(score>100)
        printf("100");
    else
        printf("%d",score);
    return 0;
}
