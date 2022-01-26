#include<stdio.h>

int main(void)
{
    int N,min=10001,max=-1,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
    {
        if(min>a[i])min=a[i];
        if(max<a[i])max=a[i];
    }
    printf("%d",max-min);
}
