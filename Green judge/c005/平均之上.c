#include<stdio.h>

int main(void)
{
    int N,i,none=0;
    scanf("%d",&N);
    float a[N],b[N],sum_a=0,sum_b=0;
    for(i=0;i<N;i++)
    {
        scanf("%f",&a[i]);
        sum_a+=a[i];
    }

    for(i=0;i<N;i++)
    {
        scanf("%f",&b[i]);
        sum_b+=b[i];
    }
    for(i=0;i<N;i++)
    {
        if(a[i]>=sum_a/N&&b[i]>=sum_b/N)
            printf("%d ",i+1);
        else
            none++;
    }
    if(none==N)
        printf("NO");
    return 0;
}
