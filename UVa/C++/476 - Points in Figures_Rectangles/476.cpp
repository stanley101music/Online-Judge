#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct point{
	double x1,x2,y1,y2;
}point;

point pt[11];

int main()
{
	char type;
	double x,y;
	int i=1,j,count=0,flag=0,f1;
	
	while(cin>>type && type!='*')
	{
		cin>>pt[i].x1>>pt[i].y1>>pt[i].x2>>pt[i].y2;
		i++;
	}
		
	while(cin>>x>>y && x!=9999.9)
	{
		count++;
		f1=0;
		for(j=1;j<i;j++)
		{
			flag=0;
			if(x>pt[j].x1 && x<pt[j].x2 && y<pt[j].y1 && y>pt[j].y2)
					flag=j;
					
			if(flag)
			{
				cout<<"Point "<<count<<" is contained in figure "<<flag<<"\n";
				f1=1;
			}
				
		}
		
		if(!f1)
			cout<<"Point "<<count<<" is not contained in any figure\n";
	}
	return 0;
}
