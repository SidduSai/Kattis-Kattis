#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,k;
	int count=0;
	cin>>n;
	cin>>k;
	string a[100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
			cin>>a[j];
			string temp = a[j];
			for(int m=j;m<=0; m--)
			{
				if(temp == a[m])
				{
					continue;
				}
				else
				{
					count++;
				}
			}
		}
		cout<<count;
	}
}
