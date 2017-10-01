#include <iostream>
using namespace std;

int main()
{
	int a;
	for(int i=1;i<=100;i++)
	{
		if(i%3 == 0 && i%5 == 0)
		{
			cout<<"rightpoint"<<endl;
			continue;
		}
		else if(i%3 == 0)
		{
			cout<<"right"<<endl;
			continue;
		}
		else if(i%5 == 0)
		{
			cout<<"point"<<endl;
			continue;
		}
		cout<<i<<endl;
	}
}
