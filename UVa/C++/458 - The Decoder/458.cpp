#include<iostream>

using namespace std;

int main()
{
	string str;
	while(getline(cin,str))
	{
		int i;
		for(i=0;i<str.length();i++)
			cout<<char(str[i]-7);
		cout<<'\n';
	}	
	return 0;
}
