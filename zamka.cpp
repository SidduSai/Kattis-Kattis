#include <iostream>
using namespace std;
int sumdigit(int num);

int main()
{
	int L,D,X;
	cin>>L>>D>>X;
	for(int i=L;i<=D;i++)
	{
		
		if(sumdigit(i) == X)
		{
		cout<<i<<"\n";
		break;
		}	
		else
		{
			continue;
		}
	}
	
	for(int j=D;j>=L;j--)
	{
		if(sumdigit(j) == X)
		{
		cout<<j;
		break;
		}
		else
		{
			continue;
		}
	}
}

int sumdigit(int num)
{
	int sum=0;
	while(num > 0)
	{ 
	sum = sum + num%10;
	num = num/10;
	}
	return(sum);
}

