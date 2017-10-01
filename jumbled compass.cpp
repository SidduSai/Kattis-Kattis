#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	//+case
	if(a>b)
	{
		int c=360-a;
		int d=c+b;
		int f=b-a;
		if(abs(d)>abs(f))
		{
			cout<<f;
		}
		else
		{
			cout<<d;
		}
	}
	else
	{
		int e=b-a;
		int f=a+(360-b);
		if(abs(e)>abs(f))
		{
			cout<<"-"<<f;
		}
		else
		{
			cout<<e;
		}
	}
}
