#include<stdio.h>

int main(void)
{
    int N,i,vote[100],A=0,B=0,C=0,invalid=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&vote[i]);
        if(vote[i]>3)
        {
            invalid++;
            continue;
        }
        if(vote[i]==1)
            A++;
        else if(vote[i]==2)
            B++;
        else if(vote[i]==3)
            C++;
    }
    printf("%d %d %d %d",A,B,C,invalid);
    return 0;
}
