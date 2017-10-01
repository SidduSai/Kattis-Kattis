#include <iostream>
using namespace std;

int main()
{
	int i,j,a,b,c;
	//cout<<"enter the hours and minutes"<<"\n";
	cin>>i>>j;
	if(i==0)
	{
		if(j<45)
		{
			i=23;
			c=45-j;
			a=60-c;
			j=a;
			cout<<i<<" "<<j;
		}
		else
		{
			i=23;
			b=j-45;
			cout<<i<<" "<<b;
		}
	}
	else
	{
	if(j<45)
	{
		i=i-1;
		c=45-j;
		a=60-c;
		cout<<i<<" "<<a;
	}
	else
	{
		b=j-45;
		cout<<i<<" "<<b;
	}
}
}
