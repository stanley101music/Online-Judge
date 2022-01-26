#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
    const int *ia=(const int *)a;
    const int *ib=(const int *)b;
    return *ia-*ib;
}

int main(void)
{
    int N,M,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    scanf("%d",&M);
    int b[M];
    for(i=0;i<M;i++)
        scanf("%d",&b[i]);

    int c[N+M];
    for(i=0;i<N;i++)c[i]=a[i];
    for(i=N;i<M+N;i++)c[i]=b[i-N];

    qsort(c,N+M,sizeof(int),compare);
    for(i=0;i<N+M;i++)
        printf("%d ",c[i]);
    return 0;
}
