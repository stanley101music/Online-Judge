#include<stdio.h>

int min(int a,int b)
{
	return a<b?a:b;
}
int max(int a,int b)
{
	return a>b?a:b;
}

int main(void)
{
	int a,b,i,count,maxcount,goal;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		maxcount=0;
		for(i=min(a,b);i<=max(a,b);i++)
		{
			goal=i;
			count=1;
			while(goal!=1)
			{
				if(goal%2==0)goal/=2;
				else      goal=goal*3+1;
				count++;
			}
			if(count>maxcount)maxcount=count; 
		}
		printf("%d %d %d\n",a,b,maxcount);
	}
	return 0;
} 
