#include <iostream>
using namespace std;
int max(int num1,int num2);

int main()
{
	int a,b,c,d,sum,arr[10],temp = 0;
	for(int i=0;i<5;i++)
	{
		cin>>a>>b>>c>>d;
		sum = a+b+c+d;
		arr[i] = sum;
		temp = max(temp, arr[i]);
	}
	for(int j=0;j<5;j++)
	{
		if(arr[j] == temp)
		{
		cout<<j+1<<" "<<temp;
		}
	}
	
}
int max(int num1, int num2)
{
	if(num1 > num2)
	{
		return(num1);
	}
	else
	{
		return(num2);
	}
}
