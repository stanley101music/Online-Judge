#include<stdio.h>

int main(void)
{
    int jackpot[8],receipt[8],i=0,hit[8]={0},k=0;
    char c;
    while((c=getchar())!=' ')
    {
        jackpot[i]=c-48;
        i++;
    }
    i=0;
    while((c=getchar())!='\n')
    {
        receipt[i]=c-48;
        i++;
    }

    for(i=0;i<8;i++)
    {
        if(jackpot[i]==receipt[i])
            hit[i]++;
    }
    i=7;
    while(hit[i]!=0)
    {
        k++;
        i--;
    }
    if(k<3) printf("0");
    else if(k==3) printf("200");
    else if(k==4) printf("1000");
    else if(k==5) printf("4000");
    else if(k==6) printf("10000");
    else if(k==7) printf("40000");
    else if(k==9) printf("200000");
    return 0;
}
