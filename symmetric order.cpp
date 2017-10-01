#include <iostream>
using namespace std;

int main()
{
	int n[15],k,l,z,w;
	string a,b[15],c[15],d[15][15];
	int x=0;
	cin>>n[x];
	w = n[x];
	while(w != 0)
	{
		for(int i=0;i<n[x];i++)
		{
		cin>>a;
		if(i%2 == 0)
		{
			b[i]=a;
		}
		else
		{
			c[i]=a;
		}
		}
		if(n[x]%2 == 0)
		{
		z = n[x]/2;
		}
		else
		{
		z = (n[x]/2)+1;
		}
	
		for(int i=0;i<z;i++)
		{
		d[x][i] = b[i+i];
		if(n[x]%2 == 0)
		{
			k=n[x]/2;
			l = k+i;
			d[x][l] = c[(n[x]-1)-(i+i)]; 
		}
		else
		{
			if((z+i) != n[x])
			{
			k=(n[x]/2)+1;
			l = k+i;
			d[x][l] = c[(n[x]-2) - (i+i)];	
			}
		}
		}
		x++;
		cin>>n[x];
		w = n[x];
	}
	for(int i=0;i<x;i++)
	{
		cout<<"SET "<<i+1<<endl;
		for(int j=0;j<n[i];j++)
		{
			
			cout<<d[i][j]<<endl;
		}
	}
}	
