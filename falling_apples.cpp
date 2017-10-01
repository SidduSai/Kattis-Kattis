#include <iostream>
using namespace std;

bool checkthebase(char** gravity,int i, int j)
{
	if(gravity[j][i] == '.')
	{
		return false;
	}
	else
	return true;
}

int main()
{
	int r,c,base;
	cin>>r>>c;
	char** gravity;
	bool flag;
	gravity = new char*[r];
	for(int i=0;i<r;i++)
	{
		gravity[i] = new char[c];
		for(int j=0;j<c;j++)
		{
			cin>>gravity[i][j];
		}
	}
	
	for(int i=0;i<c;i++)
	{
		flag = checkthebase(gravity,i,r-1);
		if(flag)
			base = r-1;
		else
			base = r;
		for(int j=r-2;j>=0;j--)
		{
			if(gravity[j][i] == 'a')
			{
				gravity[j][i] = '.';
				gravity[base-1][i] = 'a';
				base = base - 1;
			}
			else if(gravity[j][i] == '#')
				base = j;
			else
			continue;
		}
	}

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<gravity[i][j];
		}
		cout<<"\n";
	}
}
