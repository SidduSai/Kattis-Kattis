#include <iostream>
int positive(int num);
int odd(int num);
int even(int num);
using namespace std;

int main()
{
	int p,a[10000],b[10000];
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<p;i++)
	{
		cout<<a[i]<<" "<<positive(b[i])<<" "<<odd(b[i])<<" "<<even(b[i])<<endl;
	}
}

int positive(int num)
{
	int sum = 0;
	for(int i=0;i<=num;i++)
	{
		sum = sum + i;
	}
	return(sum);
}

int odd(int num)
{
	int sum = -1,result = 0;
	for(int i=0;i<num;i++)
	{
		sum = sum + 2;
		result = result + sum;
	}
	return(result);
}

int even(int num)
{
	int sum = 0, result = 0;
	for(int i=0;i<num;i++)
	{
		sum = sum + 2;
		result = result + sum;
	}
	return(result);
}
