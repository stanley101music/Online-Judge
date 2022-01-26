#include<stdio.h>

int main(void)
{
    int H,M,i;

    scanf("%d %d",&H,&M);

    if(H==7&&M<=59&&M>=30)
        printf("YES");
    else if((H<=11&&H>=8)||(H<=16&&H>=13)&&(M>=10&&M<=59))
        printf("YES");
    else if(H==12&&(M>=30&&M<=59))
        printf("YES");
    else
        printf("NO");
    return 0;
}
