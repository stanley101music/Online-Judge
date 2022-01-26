#include<stdio.h>

int main(void)
{
    int H1,M1,H2,M2,T;
    scanf("%d %d %d %d",&H1,&M1,&H2,&M2);
    if(((H2-H1)*60+M2-M1)<=30)
        printf("0");
    else if((H2-H1)*60+M2-M1>30&&(H2-H1)*60+M2-M1<=60)
        printf("30");
    else if((H2-H1)*60+M2-M1>60&&(H2-H1)*60+M2-M1<=120)
        printf("60");
    else
    {
        if(((((H2-H1)*60+M2-M1-120)/60)+1)*30+60>210)
            printf("210");
        else if((((H2-H1)*60+M2-M1-120)/60)==0)
            printf("%d",((((H2-H1)*60+M2-M1-120)/60)+1)*30+60);
        else
            printf("%d",(((H2-H1)*60+M2-M1-120)/60)*30+60);
    }
    return 0;
}
