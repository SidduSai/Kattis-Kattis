#include <iostream>
using namespace std;

int main()
{
	int n,a[1000],b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%400 == 0)
		{
			b = a[i]/400;
			cout<<b<<endl;
		}
		else
		{
			b = (a[i]/400) + 1;
			cout<<b<<endl;
		}
	}
}
