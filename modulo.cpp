#include <iostream>
using namespace std;

int main()
{
	int i,z,l,c;
	l = 0;
	bool a[42];
	int b[10];
	for(int j=0;j<=41;j++)
	{
		a[j]=false;
	}
	//cout<<"enter 10 numbers :"<<"\n";
	for(i=0;i<10;i++)
	{
		cin >> b[i];
		c = b[i] % 42;
		a[c] = true;
	}
	for(int k=0; k<=41; k++)
	{
		if(a[k]==true)
		{
			l++;
		}
	}
	cout << l;
}
