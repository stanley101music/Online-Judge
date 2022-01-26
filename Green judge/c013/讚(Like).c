#include<stdio.h>

int main(void)
{
    int N,num_0=0,num_1=0,num_2=0,i;
    scanf("%d",&N);
    int relation[N];
    char name[N][10];
    for(i=0;i<N;i++)
    {
        scanf("%s ",&name[i]);
        scanf("%d",&relation[i]);
    }

    for(i=0;i<N;i++)
    {
        if(relation[i]==0)
            num_0++;
        if(relation[i]==1)
            num_1++;
        if(relation[i]==2)
            num_2++;
    }
    for(i=N-1;i>=0;i--)
    {
        if(relation[i]==1)
            break;
    }
    if(num_1==0&&num_2==0) printf("%d people like this",num_0);

    else if(num_1>0||num_2>0)
    {
        if(num_1>0&&num_2>0)
        {
            if(num_0==0)
                printf("You and %s like this.",name[i]);
            else
                printf("You, %s and %d others like this.",name[i],N-2);
        }
        else if(num_2==0)
        {
            if(num_0==0)
                printf("%s like this.",name[i]);
            else
                printf("%s and %d others like this.",name[i],N-1);
        }
        else if(num_1==0)
        {
            if(num_0==0)
                printf("You like this.");
            else
                printf("You and %d others like this.",N-1);
        }
    }
    else if(num_1==0&&num_0>0&&num_2>0)
        printf("You and %d others like this.",N-1);

    return 0;
}
