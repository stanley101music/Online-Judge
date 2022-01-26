//x*log(N+1)=log(H)
//x*log(N)=log(working_cats)
#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
	double H,working_cats;
	int ans,N,x;
	int NW,total;
	
	while(cin>>H>>working_cats)
	{
		if(H==0)break;
		
		
		NW=0,total=0;
		int L=1,R=2147483647;
		int mid=(L+R)/2;
		
		//¤G¤À·j
		while(L!=R)
		{
			if(log(mid+1)/log(mid)-log(H)/log(working_cats)>0)
				L=mid+1;
			else if(log(mid+1)/log(mid)-log(H)/log(working_cats)<0)
				R=mid;
			else break;
			mid=(L+R)/2;			
		} 
		
		N=mid;
		x=log(H)/log(N+1);
		
		for(int i=0;i<=x;i++)
		{
			total+=H*pow(N/N+1,i);
			if(i==x)break;
			NW+=pow(N,i);
			
		}
		
		cout<<NW<<' '<<total<<'\n';
	}
}
