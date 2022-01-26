#include<stdio.h>

int main(void)
{
    int I,O;
    scanf("%d %d",&I,&O);
    if(O-I<=20)
        printf("0");
    else if(O-I>20&&O-I<=200)
        printf("%d",(O-I-20)*4);
    else printf("%d",(200-20)*4+(O-I-200)*3);
    return 0;
}
