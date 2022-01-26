#include<stdio.h>

int compare(const void *a,const void *b)
{
    const int *ia=(const int *)a;
    const int *ib=(const int *)b;
    return *ib-*ia;
}

int main(void)
{
    int N;
    scanf("%d",&N);
    int i,grade[N];
    for(i=0;i<N;i++)
        scanf("%d",&grade[i]);
    qsort(grade,N,sizeof(int),compare);
    printf("%d",grade[1]);
    return 0;
}
