#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
    const int *ia=(const int *)a;
    const int *ib=(const int *)b;
    return *ia-*ib;
}

int main(void)
{
    int lottery[4],i;
    for(i=0;i<4;i++)
        scanf("%d",&lottery[i]);
    qsort(lottery,4,sizeof(int),compare);
    if(lottery[0]==lottery[1]&&lottery[0]==lottery[2]&&lottery[0]==lottery[3])
        printf("1000");
    else if((lottery[0]==lottery[1]&&lottery[1]==lottery[2])||(lottery[1]==lottery[2]&&lottery[2]==lottery[3]))
        printf("100");
    else if(lottery[0]==lottery[1]&&lottery[2]==lottery[3])
        printf("50");
    else if(lottery[0]==lottery[1]||lottery[1]==lottery[2]||lottery[2]==lottery[3])
        printf("10");
    else
        printf("0");
    return 0;
}
