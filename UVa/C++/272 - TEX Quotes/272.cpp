#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int count=0,i;
	string str;

	while(getline(cin,str))
	{
		for(i=0;i<str.length();i++)
		{
			if(str[i]=='"' && count%2==0)
			{
				cout<<"``";
				count++;
			}
			else if(str[i]=='"' && count%2!=0)
			{
				cout<<"''";
				count++;
			}
			else
				cout<<str[i];
		}
		
		cout<<'\n';
	}
	return 0;
}
