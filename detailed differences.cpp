#include <iostream>
using namespace std;

int main()
{
	string a[500],b[500];
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int k=0;k<num;k++)
	{
		cout<<a[k];
		cout<<"\n";
		cout<<b[k];
		cout<<"\n";
		for(int j=0;j<a[k].size();j++)
		{
		if(a[k][j]==b[k][j])
		{
			cout<<".";
				}
		else
		{
			cout<<"*";
		}
		}
		cout<<"\n"<<"\n";
	}
}
