#include<stdio.h>

int main(void)
{
    int N,M,i,j,common=0;
    scanf("%d",&N);
    int ID_1[N];
    for(i=0;i<N;i++)
        scanf("%d",&ID_1[i]);
    scanf("%d",&M);
    int ID_2[M];
    for(i=0;i<M;i++)
        scanf("%d",&ID_2[i]);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if(ID_1[i]==ID_2[j])
                common++;
        }
    }
    printf("%d",common);
    return 0;
}
