#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a[10],n;
	int count=0;
	int sum[10]= {0,0,0,0,0,0,0,0,0,0};
	
	//<<"enter the value of n :";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int x=a[i]%10;
		int y=a[i]/10;
		sum[i] = pow(y,x);
		//cout<<sum[i]<<endl;
		count = count + sum[i];
	}
	
	cout<<count;
}
