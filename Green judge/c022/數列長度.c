#include<stdio.h>

int main(void)
{
    int N,total=1;
    scanf("%d",&N);

    while(N>=3)
    {
        if(N%3==0)
        {
            total++;
            N=N/3;
        }
        else if(N%3==1)
        {
            total++;
            N=2*N+1;
        }
        else if(N%3==2)
        {
            total++;
            N=2*N-1;
        }
    }
    printf("%d",total);
    return 0;
}
