#include <iostream>
using namespace std;

int main()
{
	char b[]={'a','e','i','o','u'};
	string s;
	int i;
	//cout<<"enter the string"<<endl;
	getline(cin,s);
	/*for(i=6;i>=0;i--)
	{
		cout<<b[i];
	}*/
	for(i=0;i<s.size();i++)
	{
		for(int k=0;k<=6;k++)
		{
		if(s[i] == b[k])
		{
			i=i+2;
		}
		else
		{
			continue;
		}
		}	
		cout<<s[i];
	}
}
