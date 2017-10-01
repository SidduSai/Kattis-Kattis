#include <iostream>
#include <vector>
#include <cmath>
#include <cctype>
#include <cstdlib>
using namespace std;

int main()
{
	int a[3][2];
	int count=1;
	int sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
			count=count*a[i][j];
		}
		sum=sum+count;
		count=1;
		//cout<<sum<<endl;
	}
	sum=sqrt(sum);
	if(sum == atoi(sum))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
