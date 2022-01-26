#include<iostream>
#include<string>
using namespace std;

int main()
{
	int X,Y,a,b;
	char direction;
	int vec[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	string order;	
	
	cin>>X>>Y;
	
	while(cin>>a>>b>>direction)
	{
		cin>>order;
		int vec_x,vec_y;
		int index,lost=0;
		
		switch(direction)
		{
			case'N':
				index=0;
				vec_x=0;
				vec_y=1;
				break;
			case'E':
				index=1;
				vec_x=1;
				vec_y=0;
				break;
			case'S':
				index=2;
				vec_x=0;
				vec_y=-1;
				break;
			case'W':
				index=3;
				vec_x=-1;
				vec_y=0;
				break;
		}
		
		for(char &i : order)
		{
			if(a>X || a<0)
			{
				a-=vec_x;
				lost=1;
				break;
			}
			if(b>Y || b<0)
			{
				b-=vec_y;
				lost=1;
				break;
			}
			
			switch(i)
			{
				case'F':
					a+=vec_x;
					b+=vec_y;
					break;
				case'R':
					index=(index+1)%4;
					
					vec_x=vec[index][0];
					vec_y=vec[index][1];
					break;
				case'L':
					index=(index+3)%4;
					vec_x=vec[index][0];
					vec_y=vec[index][1];
					break;	
			}			
		}
		
		switch(index)
		{
			case 0:
				cout<<a<<' '<<b<<' '<<"N";
				break;
			case 1:
				cout<<a<<' '<<b<<' '<<"E";
				break;
			case 2:
				cout<<a<<' '<<b<<' '<<"S";
				break;
			case 3:
				cout<<a<<' '<<b<<' '<<"W";
				break;	
		}
		
		if(lost)
			cout<<" LOST\n";
		else
			cout<<'\n';
	}
}
