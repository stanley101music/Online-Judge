#include<stdio.h>

int main(void)
{
    int money,point;

    scanf("%d %d",&money,&point);

    if(point>money/10)
    {
        money-=money/10;
        point=point-money/9+money/100;
    }
    else
    {
        money-=point;
        point=money/100;
    }

    printf("%d %d",money,point);
    return 0;
}
