#include<stdio.h>

int main(void)
{
    int X,i,diff[100000],level=1;
    scanf("%d",&X);

    diff[0]=10;
    for(i=1;i<100000;i++)
    {
        diff[i]=diff[i-1]*2-3*(i+1);
        X-=diff[i-1];
        if(X<0)
        {
            X=X*(-1);
            break;
        }
        level++;
    }

    printf("%d %d",level,X);
    return 0;
}
