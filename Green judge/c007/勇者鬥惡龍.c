#include<stdio.h>

int main(void)
{
    int HP,ATK,DHP,DATK,i=1;
    scanf("%d %d %d %d",&HP,&ATK,&DHP,&DATK);
    while(1)
    {
        printf("Round %d:\n",i);
        if(i%2!=0)
        {
            DHP-=ATK;
            if(DHP<0)
                DHP=0;
            printf("You hit Dragon %d points.\n",ATK);
            printf("You:%d Dragon:%d\n",HP,DHP);
        }
        if(i%2==0)
        {
            HP-=DATK;
            if(HP<0)
                HP=0;
            printf("Dragon hits You %d points.\n",DATK);
            printf("You:%d Dragon:%d\n",HP,DHP);
        }
        if(HP<=0)
        {
            printf("You Lose!");
            break;
        }
        if(DHP<=0)
        {
            printf("You Win!");
            break;
        }
        i++;
    }
    return 0;
}
