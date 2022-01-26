#include<stdio.h>

int main(void)
{
    int A,B,i,ans=0;
    scanf("%d %d",&A,&B);

    for(i=A;i<=B;i++)
    {
        if(i%2!=0&&i%3!=0&&i%5!=0)
            ans++;
    }
    printf("%d",ans);
    return 0;
}
