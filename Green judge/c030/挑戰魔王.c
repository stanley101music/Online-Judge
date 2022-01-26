#include<stdio.h>

int main(void)
{
    char c[1000];
    int i=0,valid=0;
    while((c[i]=getchar())!='\n')i++;

    for(i=0;i<1000;i++)
    {
        if(c[i]=='A'&&c[i+1]=='C')
            valid++;
    }
    printf("%d",valid);
    return 0;
}
