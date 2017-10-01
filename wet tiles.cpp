#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;

class Dot
{
	public:
		int x;
		int y;
			
};

void explore(char** &board, queue<Dot> &q, int k, int x, int y,int t)
{
	char arr[10];
	Dot value,temp;
	for(int i=0;i<k;i++)
	{
		value = q.front();
		if(value.y != 1)
		{
			if(board[value.x][value.y-1] == '.')
			{
			temp.x = value.x;
			temp.y = value.y-1;
//			itoa(t,arr,10);
			board[value.x][value.y-1] = *arr;
			q.push(temp);
			}
		}
		if(value.x != 1)
		{
			if(board[value.x-1][value.y] == '.')
			{
			temp.x = value.x-1;
			temp.y = value.y;
//			itoa(t,arr,10);
			board[value.x-1][value.y] = *arr;
			q.push(temp);
			}
		}
		if(value.y != y-1)
		{
			if(board[value.x][value.y+1] == '.')
			{
			temp.x = value.x;
			temp.y = value.y+1;
//			itoa(t,arr,10);
			board[value.x][value.y+1] = *arr;
			q.push(temp);
			}
		}
		if(value.x != x-1)
		{
			if(board[value.x+1][value.y] == '.')
			{
			temp.x = value.x+1;
			temp.y = value.y;
//			itoa(t,arr,10);
			board[value.x+1][value.y] = *arr;
			q.push(temp);
			}
		}
		q.pop();
	}
}

void walls(Dot* wall,int w,char** board)
{
	int count;
	int i,j,seti,setj;
	for(int l=0;l<w*2;l=l+2)
	{
		if(wall[l].x == wall[l].y && wall[l+1].x == wall[l+1].y)
		{
			i = min(wall[l].x,wall[l+1].x);
			j = min(wall[l].y,wall[l+1].y);
			seti = 1;
			setj = 1;
			count = abs(wall[l].x - wall[l+1].x);
		}
		else if(wall[l].x == wall[l+1].x && wall[l].y == wall[l+1].y)
		{
			board[wall[l].x][wall[l].y] = 'x';
			count = -1;
			i = 0;
			j = 0;
			seti = 0;
			setj = 0;
		}
		else if(wall[l].x == wall[l+1].x && wall[l].y != wall[l+1].y)
		{
			i = wall[l].x;
			j = min(wall[l].y,wall[l+1].y);
			seti = 0;
			setj = 1;
			count = abs(wall[l].y - wall[l+1].y);
		}
		else if(wall[l].x != wall[l+1].x && wall[l].y == wall[l+1].y)
		{
			board[wall[l].x][wall[l].y] = 'b';
			board[wall[l+1].x][wall[l+1].y] = 'b';
			i = min(wall[l].x,wall[l+1].x);
			j = wall[l].y;
			seti = 1;
			setj = 0;
			count = abs(wall[l].x - wall[l+1].x);
		}
		else if(wall[l].x != wall[l+1].x && wall[l].y != wall[l+1].y)
		{
			if(wall[l].x < wall[l+1].x && wall[l].y < wall[l+1].y || wall[l].x > wall[l+1].x && wall[l].y > wall[l+1].y )
			{
			i = min(wall[l].x,wall[l+1].x);
			j = min(wall[l].y,wall[l+1].y);
			seti = 1;
			setj = 1;
			count = abs(wall[l].x - wall[l+1].x);			
			}
			else
			{
			i = min(wall[l].x,wall[l+1].x);
			j = max(wall[l].y,wall[l+1].y);
			seti = 1;
			setj = -1;
			count = abs(wall[l].x - wall[l+1].x);			
			}
		}
		for(int k=0;k<=count;k++)
		{
			board[i][j] = 'x';
			i = i + seti;
			j = j + setj;
		}
	}
}

//void displayMatrix(char** board,int x,int y)
//{
//	for(int i=0;i<x;i++)
//	{
//		for(int j=0;j<y;j++)
//		{
//			cout<<board[i][j];
//		}
//		cout<<endl;
//	}
//}

int main()
{
	int X,Y,T,L,W,sizestack,count=0;
	Dot* dot;
	Dot* wall;
	queue<Dot> q;
	cin>>X;
	while(X != -1)
	{
		cin>>Y;
		X = X+1;
		Y = Y+1;
		char** board = new char*[X];
		for(int i = 0;i<X;i++)
			board[i] = new char[Y];
//		cout<<"the value of x and y is "<<X<<"and "<<Y<<endl;	
	for(int i=0;i<X;i++)
	{
		for(int j=0;j<Y;j++)
		{
			if(i == 0 || j == 0)
			{
				board[i][j] = 'x';
			}
			else
				board[i][j] = '.';
		}
	}

		cin>>T>>L>>W;
		dot = new Dot[L];
		for(int i = 0;i<L;i++)
		{
			cin>>dot[i].x>>dot[i].y;
			board[dot[i].x][abs(dot[i].y)] = 'L';
			q.push(dot[i]);
		}
		wall = new Dot[2*W];
		
		for(int i=0;i<2*W;i++)
		{
			cin>>wall[i].x>>wall[i].y;
		}
		walls(wall,W,board);
//		displayMatrix(board,X,Y);
		for(int i=0;i<T;i++)
		{
//			cout<<"the size of the queue is "<<q.size()<<endl;
			sizestack = q.size();
			count = count + sizestack;
			explore(board,q,sizestack,X,Y,i+1);
//			displayMatrix(board,X,Y);
		}
		
		cout<<count<<endl;
		count = 0;
		sizestack = 0;
		while(q.empty() == false)
			q.pop();
//		cout<<"the value of x is "<<X<<endl;
		for(int i=0;i<X;i++)
		{
			delete[] board[i];
		}
		delete[] board;
//		cout<<"the size of the queue is "<<q.size()<<endl;
		cin>>X;
//		cout<<"it is not waiting for me to give x"<<endl;
	}
}
