#include<iostream>
using namespace std;
int wall[51];

int main()
{
	int N,ID=0,total,avr,step,i;
	while(cin>>N)
	{
		if(N==0)break;
		ID++;
		total=0;
		step=0;
		
		for(int i=0;i<N;i++)
		{
			cin>>wall[i];
			total+=wall[i];
		}
		
		avr=total/N;
				
		for(i=0;i<N;i++)
			if(wall[i]>avr)
				step+=wall[i]-avr;
		
		cout<<"Set #"<<ID<<'\n';
		cout<<"The minimum number of moves is "<<step<<".\n\n";
	}
}
