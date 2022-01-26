#include<iostream>
using namespace std;
int main()
{
	unsigned long long  N,row,ans;
	while(cin>>N)
	{
		row=(N+1)/2;
		ans=3*(2*(row+2)*(row-1)-6*row+7)-12+6*N;
		cout<<ans<<'\n';
	}
}
