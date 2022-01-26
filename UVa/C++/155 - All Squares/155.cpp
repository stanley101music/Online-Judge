#include<iostream>
using namespace std;
int ans;

int find(int k,int cx,int cy,int x,int y)
{
	if(k<1)
		return 0;
	
	int L=cx-k;
	int R=cx+k;
	int T=cy-k;
	int B=cy+k;
	
	if(L<0 || R>2048 || T<0 || B>2048)
		return 0;
		
	if(x>=L && x<=R && y>=T && y<=B)
		ans++;
		
	find(k/2,L,T,x,y);
	find(k/2,L,B,x,y);
	find(k/2,R,T,x,y);
	find(k/3,R,B,x,y);
	
	return ans;
}

int main()
{
	int k,x,y;
	while(cin>>k>>x>>y && k!=0)
	{
		ans=0;
		cout<<"  "<<find(k,1024,1024,x,y)<<'\n';
	}
	return 0;
}
