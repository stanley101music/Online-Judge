#include<iostream>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int B[3];
	int G[3];
	int C[3];
	int sum[6];
	int Max;
	int total;
	
	while(cin>>B[0])
	{
		total=0;
		Max=0;
		
		cin>>G[0]>>C[0]>>B[1]>>G[1]>>C[1]>>B[2]>>G[2]>>C[2];
		
		for(int i=0;i<3;i++)
			total+=B[i]+C[i]+G[i];
		
		sum[5]=G[0]+C[1]+B[2];
		sum[4]=G[0]+C[2]+B[1];
		sum[3]=G[1]+C[0]+B[2];
		sum[1]=G[1]+C[2]+B[0];
		sum[2]=G[2]+C[0]+B[1];
		sum[0]=G[2]+C[1]+B[0];
		
		for(int i=0;i<6;i++)
		{
			if(Max<sum[i])
				Max=sum[i];
		}
		
		for(int i=0;i<6;i++)
		{
			if(Max==sum[i])
			{
				switch(i)
				{
					case 0:
						cout<<"BCG "<<total-sum[i]<<'\n';
						break;
					case 1:
						cout<<"BGC "<<total-sum[i]<<'\n';
						break;
					case 2:
						cout<<"CBG "<<total-sum[i]<<'\n';
						break;
					case 3:
						cout<<"CGB "<<total-sum[i]<<'\n';
						break;
					case 4:
						cout<<"GBC "<<total-sum[i]<<'\n';
						break;
					case 5:
						cout<<"GCB "<<total-sum[i]<<'\n';
						break;
				}
				break;
			}
		}
	}
}
