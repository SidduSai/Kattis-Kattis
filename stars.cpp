#include <iostream>
using namespace std;
int main()
{
	int i=1;
	int j=6;
	for(int a=0;a<=3;a++)
	{
		for(int b=a;b>=0;b--)
		{
				cout<<i;
				i++;
				if(i==10)
				{
					cout<<i<<"\n";
					for(int c=3;c>0;c--)
					{
						for(int d=c;d>0;d--)
						{
						//	cout<<"indifr yh msin got loop";
							cout<<j;
							j--;
						}
						cout<<"\n";
					}
					//cout<<"breaking th main loop";
					break;
				}
		}
		cout<<"\n";
	}
}
