#include <iostream>
using namespace std;

class Dot
{
	public:
		int x;
		int y;
};

void printit(char matrix[25][25],int w,int l)
{
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<w;j++)
		{
			cout<<matrix[i][j];
		}
		cout<<"\n";
	}
}

int main()
{
	int w,l,house=1;
	int dir;
	Dot dot;
	bool flag = true;
	cin>>w>>l;
	while(w != 0 && l != 0)
	{
		char matrix[25][25];
		for(int i=0;i<l;i++)
		{
			for(int j=0;j<w;j++)
			{
				cin>>matrix[i][j];
				if(matrix[i][j] == '*')
				{
					dot.x = i;
					dot.y = j;
				}
			}
		}
//		cout<<dot.x<<" "<<dot.y<<endl;
		
		if(dot.y == 0)
			dir = 1;
		if(dot.y == w-1)
			dir = 2;
		if(dot.x == l-1)
			dir = 3;
		if(dot.x == 0)
			dir = 4;
		
//		cout<<"the value of dot.x is "<<dot.x<<endl;
//		cout<<"the value of dot.y is "<<dot.y<<endl;
//		cout<<"the value of dir is "<<dir<<endl;
//		
		while(flag)
		{
			if(dir == 1)
				dot.y = dot.y + 1;
			else if(dir == 2)
				dot.y = dot.y - 1;
			else if(dir == 3)
				dot.x = dot.x - 1;	
			else
				dot.x = dot.x + 1;	
			
//			cout<<"printing the current point im reading"<<matrix[dot.x][dot.y]<<endl;
			if(matrix[dot.x][dot.y] == '.')
				continue;
			else if(matrix[dot.x][dot.y] == 'x')
			{
//				cout<<"reached the x, setting flag = false"<<endl;
				flag = false;
			}
			else if(dir == 1)
			{
				if(matrix[dot.x][dot.y] == '\\')
					dir = 4;
				else if(matrix[dot.x][dot.y] == '/')
					dir = 3;
			}
			else if(dir == 2)
			{
				if(matrix[dot.x][dot.y] == '\\')
					dir = 3;
				else if(matrix[dot.x][dot.y] == '/')
					dir = 4;
			}
			else if(dir == 3)
			{
				if(matrix[dot.x][dot.y] == '\\')
					dir = 2;
				else if(matrix[dot.x][dot.y] == '/')
					dir = 1;
			}
			else if(dir == 4)
			{
				if(matrix[dot.x][dot.y] == '\\')
					dir = 1;
				else if(matrix[dot.x][dot.y] == '/')
					dir = 2;
			}
//			cout<<"crossed the 2 breakpoint"<<endl;
		}
		matrix[dot.x][dot.y] = '&';
		cout<<"HOUSE "<<house<<endl;
		house++;
		printit(matrix,w,l);
		flag = true;
		cin>>w>>l;
	}
}
