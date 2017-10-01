#include <iostream>
#include <cmath>
int max(int num1, int num2);
using namespace std;

int main()
{
	int m,height,width,widthtracker;
	cin>>m;
	while(m!=0)
	{
		int newheight = 0, newwidth = 0, widthtracker = 0, heighttracker = 0;
		cin>>width>>height;
		//cout<<"these are the values of variables after each and every iteration"<<width<<height;
		while(newwidth != -1 && newheight != -1)
		{
		if(m-(width+newwidth) >= 0)
		{
			width = width + newwidth;
			widthtracker = max(width, widthtracker);
			heighttracker = max(height,newheight);
		}
		else
		{
			height = newheight;
			width = newwidth;
			widthtracker = max(width, widthtracker);
			heighttracker = heighttracker + newheight;
		}
		finalheight = finalheight+ heighttracker;
		cin>>newwidth>>newheight;
		}
		cout<<widthtracker<<" x "<<height;
		cin>>m;
	}
}

int max(int num1, int num2)
{
	if(num1 > num2)
	{
		return(num1);
	}
	else
	{
		return(num2);
	}
}
