#include <iostream>
using namespace std;

bool isAllAreSame(long int (&arr)[10],int n)
{
	bool a = true;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i] == arr[i+1])
		{
			continue;
		}
		else
		{
		a = false;	
		break;
		}
	}
	if(a == true)
	return false;
	else
	return true;
}

int main()
{
	int a,level;
	long int arr[10],sum=0;
	cin>>a;
	level = a;
	for(int i=0;i<a;i++)
	cin>>arr[i];
	while(isAllAreSame(arr,a))
	{
		sum = sum+arr[a-1];
		for(int i=0;i<a-1;i++)
		{
			arr[i] = arr[i+1] - arr[i];
		}
		a = a-1;
	}
	sum = sum + arr[0];
	level = level - a;
	cout<<level<<" "<<sum<<endl;
}
