#include <iostream>
using namespace std;

int main()
{
	int a=0,n,c[100],z=0;
	string name,b[100][100];
	string target = "Simon says";
	cin>>n;
	getline(cin,name);
	for(int j=0;j<n;j++)
	{
		getline(cin,name);
		c[j] = name.size();
		for(int i=0;i<10;i++)
		{
			if(name[i] == target[i])
			{
				a++;
			}
			else
			{
				continue;
				a=0;
			}
		}
		if(a == 10)
		{
			for(int i=11;i<name.size();i++)
			{
				b[z][i] = name[i];
			}
			z++;
		}
		else
		{
			a=0;
		}
		a=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<c[i];j++)
		{
			cout<<b[i][j];
		}
		cout<<"\n";
	}
}
