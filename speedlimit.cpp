#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,z=0,score[10];
	int a,b[10];
	cin>>n;
	while(n != -1)
	{
		cin>>a>>b[0];
		int dummy = 0, temp = 0;
		temp = temp + (a*b[0]);
		for(int i=0;i<n-1;i++)
		{
			cin>>a>>b[i+1];
			dummy = (b[i+1] - b[i]);
			temp = temp + (a*dummy);
		}
	cin>>n;
	score[z] = temp;
	++z;
//	cout<<temp<<"scope testing";
//	if(n != -1)
//	{		
//	score[z] = temp;
//		z++;
//	}
//	else
//	{
//		continue;
//	}
	}
	for(int j=0;j<z;j++)
	{
		cout<<score[j]<<" miles"<<"\n";
	}
}
