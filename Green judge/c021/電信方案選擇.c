#include<stdio.h>

int main(void)
{
    int A,B,C,costA,costB,costC;

    scanf("%d %d %d",&A,&B,&C);

    costA=A+B*3+C*5;
    costB=A*3+B*2+C*4;
    costC=3*(A+B+C);

    if(costA<=costB&&costA<=costC)
        printf("A %d",costA);
    else if(costB<costA&&costB<=costC)
        printf("B %d",costB);
    else
        printf("C %d",costC);
    return 0;
}
