#include<stdio.h>

int main(void)
{
    int N,Y,M;
    scanf("%d",&N);
    Y=(102*12+8+(N-145))/12;
    M=(102*12+8+(N-145))%12;
    printf("%d %d",Y,M);
    return 0;
}
