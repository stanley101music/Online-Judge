#include<stdio.h>

int main(void)
{
    int i=0,ID[8]={0},sum=0,num;
    char c;
    while((c=getchar())!='\n')
    {
        ID[i]=c-48;
        i++;
        sum+=ID[i-1]*i;
    }
    num=(10-sum%10)%10;
    printf("%d",num);
    return 0;
}
