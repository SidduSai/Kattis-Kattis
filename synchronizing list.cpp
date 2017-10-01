#include <iostream>
void swap(int& a, int& b);
int leastnumber(int a[][5000],int startindex, int n, int x);
void sort(int a[][5000], int x, int n);
using namespace std;

int main()
{
	int n,x=0,a[100][5000],b[100][5000],c[100][5000];
	cin>>n;
	while(n != 0)
	{
		for(int i=0;i<2*n;i++)
		{
			if(i<n)
			{
				cin>>a[x][i];
				cout<<a[x][i];
			}
			else
			{
				cin>>b[x][i-n];
			}
		}
		sort(a,x,n);
		sort(b,x,n);
		x++;
		cin>>n;		
	}
}

void sort(int a[][5000], int x, int n)
{
	int index, result,c[100][5000];
	for(int i=0;i<n;i++)
	{
		index = leastnumber(a,i,n,x);
		swap(a[x][i],a[x][index]);
		c[x][i] = a[x][i];
	}
}

int leastnumber(int a[][5000],int startindex, int n, int x)
{
	int min = a[x][startindex],indexofmin;
	for (int i=startindex+1;i<n;i++)
	{
		if(a[x][i] < min)
		{
			min = a[x][i];
			indexofmin = i;
		}
	}
	return(indexofmin);
}

void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
