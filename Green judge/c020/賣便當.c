#include<stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    if(N+1>=101)
        printf("100");
    else if(N+1<=100&&N+1>=51)
        printf("90");
    else if(N+1<=50&&N+1>=21)
        printf("80");
    else if(N+1<=20)
        printf("60");
    return 0;
}
