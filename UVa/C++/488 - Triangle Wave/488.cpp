#include<iostream>

using namespace std;

int main()
{
	int k,F,A;
	int i,j;
	
	cin>>k;
	
	while(k--)
	{
		cin>>A>>F;		
		
		while(F--)
		{
			for(i=1;i<=A;i++)
			{
				for(j=1;j<=i;j++)
					cout<<i;
				cout<<'\n';
			}
			
			for(i=A-1;i>=1;i--)
			{
				for(j=1;j<=i;j++)
					cout<<i;
				cout<<'\n';
			}
			if(F || k)
				cout<<'\n';
		}
	}
}
