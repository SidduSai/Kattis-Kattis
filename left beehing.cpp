#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	for(int i=0;i<=15;i++)
	{
	cin>>a;
	cin>>b;
	c=a+b;
	if(a==0 && b==0)
	{
		break;
	}
	else if(c == 13)
	{
		cout<<"Never speak again."<< endl;
	}
	else if(a==b)
	{
		cout<<"Undecided."<<endl;
	}
	else if(a>b)
	{
	cout<<"To the convention."<<endl;
	}
	else if(a<b)
	{
		cout<<"Left beehind."<<endl;
	}
	}
}
