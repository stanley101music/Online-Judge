#include<stdio.h>

int main(void)
{
    int N,i,k,ans=-1;
    scanf("%d",&N);
    int position[N+1][2],distance[N+1];
    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&position[i][0],&position[i][1]);
        distance[i]=position[i][0]*position[i][0]+position[i][1]*position[i][1];
    }

    for(i=1;i<=N;i++)
    {
        if(ans<distance[i])
        {
            ans=distance[i];
            k=i;
        }
    }
    printf("%d %d",k,ans);
    return 0;
}
