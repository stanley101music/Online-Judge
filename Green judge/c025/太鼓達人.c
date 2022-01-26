#include<stdio.h>
#include<string.h>

int main(void)
{
    int score=0,combo=0,max_combo=0,i=0,j,k=0;
    char goal[100],player[100],c;

    while((c=getchar())!='\n')
    {
        goal[i]=c;
        i++;
    }
    i=0;
    while((c=getchar())!='\n')
    {
        player[i]=c;
        i++;
    }

    for(j=0;j<i;j++)
    {
        combo++;
        k++;
        if(goal[j]=='R'&&player[j]!='R')
        {
            combo=0;
            k=k-4;
        }
        if(goal[j]=='B'&&player[j]!='B')
        {
            combo=0;
            k=k-4;
        }
        if(goal[j]=='-')
        {
            combo--;
            k--;
            continue;
        }
        score+=combo*100;
        if(max_combo<combo)max_combo=combo;
    }
    if(k<0)k=0;
    printf("%d %d %d",score,max_combo,k);
    return 0;
}
