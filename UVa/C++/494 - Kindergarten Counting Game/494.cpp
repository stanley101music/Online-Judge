#include<iostream>

using namespace std;

int main()
{
	string str;
	int i,count;
	while(getline(cin,str))
	{
		count=0;
		for(i=0;i<str.length();i++)
		{
			if(isalpha(str[i]) && (!isalpha(str[i+1])))
				count++;
		}
		cout<<count<<'\n';
	}
	return 0;
}
