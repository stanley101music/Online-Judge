//k^n=p
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double n,p,k;
	while(cin>>n>>p)
	{
		k=pow(p,1/n);	
		
		cout<<k<<'\n';
	}
}
