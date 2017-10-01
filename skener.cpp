#include <iostream>
using namespace std;

int main()
{
	int r,c,zr,zc,l=0;
	char a[251][251],b[251][251];
	cin>>r>>c>>zr>>zc;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int k=0;k<zc;k++)
		{
			for(int j=0;j<c;j++)
			{
				b[j][l] = a[j][i];
			}
			l++;
		}
	}
	for(int i=0;i<(r);i++)
	{
		for(int k=0;k<zr;k++)
		{
			for(int j=0;j<(c*zc);j++)
			{
			cout<<b[i][j];
			}
		cout<<"\n";
		}
	}
}
