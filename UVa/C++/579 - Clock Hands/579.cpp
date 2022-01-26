#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double H,M;
	while(scanf("%lf:%lf",&H,&M)!=EOF)
	{
		if(H==0 && M==0)break;
		printf("%.3f\n",min(fabs(H*30.0+M/2.0-M*6.0),fabs(360.0-(H*30.0+M/2.0-M*6.0))));
	}
	return 0;
}
