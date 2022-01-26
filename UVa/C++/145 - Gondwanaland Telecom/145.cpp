#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

/*
Distance	8:00~18:00    18:00~22:00    22:00~8:00
   
   A		  0.10		 	  0.06		     0.02
   B		  0.25		 	  0.15           0.05
   C		  0.53		 	  0.33			 0.13
   D		  0.87		 	  0.47			 0.17
   E		  1.44		 	  0.80			 0.30
*/

int main()
{
	char distance;
	string phone_number;
	int start_hour,start_min,end_hour,end_min;
	double Day,Evening,Night,total;
	int time1,time2,time3;
	
	while(cin>>distance && distance!='#')
	{
		cin>>phone_number>>start_hour>>start_min>>end_hour>>end_min;
		
		switch(distance)
		{
			case'A':
				Day=0.1;
				Evening=0.06;
				Night=0.02;
				break;
			case'B':
				Day=0.25;
				Evening=0.15;
				Night=0.05;
				break;
			case'C':
				Day=0.53;
				Evening=0.33;
				Night=0.13;
				break;
			case'D':
				Day=0.87;
				Evening=0.47;
				Night=0.17;
				break;
			case'E':
				Day=1.44;
				Evening=0.8;
				Night=0.3;
				break;			
		}
		
		if(start_hour>=8 && start_hour<18)
		{
			if(end_hour>=start_hour)
			{
				if(end_hour<18)
				{
					time1=end_hour*60+end_min-start_hour*60-start_min;
					time2=0;
					time3=0;
					total=time1*Day;
				}
				else if(end_hour>=18 && end_hour<22)
				{
					time1=18*60-start_hour*60-start_min;
					time2=end_hour*60+end_min-18*60;
					time3=0;
					total=time1*Day+time2*Evening;
				}
				else
				{
					time1=18*60-start_hour*60-start_min;
					time2=(22-18)*60;
					time3=end_hour*60+end_min-22*60;
					total=time1*Day+time2*Evening+time3*Night;
				}
			}
			else if(end_hour>=8)
			{
				time1=(18*60-start_hour*60-start_min)+(end_hour*60+end_min-8*60);
				time2=(22-18)*60;
				time3=(8+2)*60;
				total=time1*Day+time2*Evening+time3*Night;
			}
			else
			{
				time1=18*60-start_hour*60-start_min;
				time2=(22-18)*60;
				time3=2*60+end_hour*60+end_min;
				total=time1*Day+time2*Evening+time3*Night;
			}
		}
		else if(start_hour>=18 && start_hour<22)
		{
			if(end_hour>=start_hour)
			{
				if(end_hour<22)
				{
					time1=0;
					time2=end_hour*60+end_min-start_hour*60-start_min;
					time3=0;
					total=time2*Evening;
				}
				else
				{
					time1=0;
					time2=22*60-start_hour*60-start_min;
					time3=end_hour*60+end_min-22*60;
					total=time2*Evening+time3*Night;
				}
			}
			else if(end_hour<8)
			{
				time1=0;
				time2=22*60-start_hour*60-start_min;
				time3=(end_hour*60+end_min)+2*60;
				total=time2*Evening+time3*Night;
			}
			else
			{
				time1=(18-8)*60;
				time2=22*60-start_hour*60-start_min+end_hour*60+end_min-18*60;
				time3=(8+2)*60;
				total=22*60-start_hour*60-start_min;
			}
		}
		else if(start_hour>=22)
		{
			if(end_hour>=start_hour)
			{
				time1=0;
				time2=0;
				time3=end_hour*60+end_min-start_hour*60-start_min;
				total=time3*Night;
			}
			else if(end_hour<8)
			{
				time1=0;
				time2=0;
				time3=(end_hour*60+end_min)+24*60-start_hour*60-start_min;
				total=time3*Night;
			}
			else if(end_hour<18)
			{
				time1=end_hour*60+end_min-8*60;
				time2=0;
				time3=24*60-start_hour*60-start_min+8*60;
				total=time1*Day+time2*Evening;
			}
			else if(end_hour<22)
			{
				time1=(18-8)*60;
				time2=end_hour*60+end_min-18*60;
				time3=24*60-start_hour*60-start_min+8*60;
				total=time1*Day+time2*Evening+time3*Night;
			}
			else
			{
				time1=(18-8)*60;
				time2=(22-18)*60;
				time3=end_hour*60+end_min-22*60+24*60-start_hour*60-start_min+8*60;
				total=time1*Day+time2*Evening+time3*Night;
			}
		}
		else
		{
			if(end_hour>=start_hour)
			{
				if(end_hour<8)
				{
					time1=0;
					time2=0;
					time3=end_hour*60+end_min-start_hour*60-start_min;
					total=time3*Night;
				}
				else if(end_hour>=8 && end_hour<18)
				{
					time1=end_hour*60+end_min-8*60;
					time2=0;
					time3=8*60-start_hour*60-start_min;
					total=time1*Day+time3*Night;
				}
				else
				{
					time1=end_hour*60+end_min-8*60;
					time2=(18-8)*60;
					time3=end_hour*60+end_min-18*60;
					total=time1*Day+time2*Evening+time3*Night;
				}
			}
			else
			{
				time1=(18-8)*60;
				time2=(22-18)*60;
				time3=8*60-start_hour*60-start_min+2*60+end_hour*50+end_min;
				total=time1*Day+time2*Evening+time3*Night;
			}
		}
		cout<<"  "<<phone_number;
		printf("%6d%6d%6d%3c%9.2f\n",time1,time2,time3,distance,total);
		
	}
}
