#include<stdio.h>

int compare(const void *a,const void *b)
{
    const int *ia=(const int *)a;
    const int *ib=(const int *)b;
    return *ib-*ia;
}

int main(void)
{
    int N,K,i,k;
    scanf("%d %d",&N,&K);
    int num[N];
    for(i=0;i<N;i++)
        scanf("%d",&num[i]);
    k=num[K-1];
    qsort(num,N,sizeof(int),compare);
    for(i=0;i<N;i++)
    {
        if(num[i]==k)
        {
             printf("%d",i+1);
             break;
        }
    }
    return 0;
}
