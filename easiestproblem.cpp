#include <iostream>
using namespace std;
int sumdigits(int num);

int main()
{
	int numsum=0;
	int i=0,n,j;
	
//	cout<< "enter the value of the n : ";
	cin>>n;
	while(n!=0)
	{
	int k=n;
	int p=11;
	while(sumdigits(p*k) != sumdigits(k))
	{
		p++;
	}
	cout << p << endl;
	i++;
	j=i;
	cin>>n;
	}
}
	int sumdigits(int num)
	{
		int numsum=0;
		while(num>0)
		{
		numsum=numsum+(num%10);
		num=num/10;
		}
	return numsum;
	}
