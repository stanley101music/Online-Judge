#include<stdio.h>

int main(void)
{
    int Y,M;
    scanf("%d %d",&Y,&M);
    if(Y*12+M<90*12+8 || Y*12+M>101*12+7)
        printf("0");
    else
        printf("%d",(Y-90)*12+(M-7));
    return 0;
}
