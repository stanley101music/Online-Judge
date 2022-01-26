#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;

typedef struct point{
	double x1,x2,y1,y2;
	double x,y,r;
	char id;
}point;

point pt[11];

int main()
{
	char type;
	double x,y;
	int i=1,j,count=0,flag=0,f1,f2;
	
	while(cin>>type && type!='*')
	{
		if(type=='r')
		{
			cin>>pt[i].x1>>pt[i].y1>>pt[i].x2>>pt[i].y2;
			pt[i].id='r';
		}
		else if(type=='c')
		{
			cin>>pt[i].x>>pt[i].y>>pt[i].r;
			pt[i].id='c';
		}
		i++;	
	}
		
	while(cin>>x>>y && x!=9999.9)
	{
		count++;
		f1=0;
		f2=0;
		for(j=1;j<i;j++)
		{
			flag=0;
			if(pt[j].id=='r' && x>pt[j].x1 && x<pt[j].x2 && y<pt[j].y1 && y>pt[j].y2)
				flag=j;		
			if(flag)
			{
				cout<<"Point "<<count<<" is contained in figure "<<flag<<"\n";
				f1=1;
			}
			flag=0;
			if(pt[j].id=='c' && pow(x-pt[j].x,2)+pow(y-pt[j].y,2)<pt[j].r*pt[j].r)
				flag=j;
			if(flag)
			{
				cout<<"Point "<<count<<" is contained in figure "<<flag<<"\n";
				f2=1;
			}
				
		}
		
		if(f1==0 && f2==0)
			cout<<"Point "<<count<<" is not contained in any figure\n";
	}
	return 0;
}
