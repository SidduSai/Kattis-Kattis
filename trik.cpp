#include <iostream>
#include <string>
#include <cstring>
using namespace std;
using std::string;

void swap(int &num1, int &num2);

int main()
{
	int a[3]={1,0,0};
	string str;
	//cout<< "enter the string : ";
	cin>>str;
	int len= str.size();
	//cout<<"the length of the string is :"<<len<<"\n";
	for(int i=0;i<len;i++)
	{
		char ch=str[i];
		if(ch=='A')
		{
			//cout<<"the first letter is"<<str[i]<<"\n";
			swap(a[0],a[1]);
			//cout<<"these are the values after swapping"<<a[0]<<a[1];
		}
		else if(ch=='B')
		{
			//cout<<"this is second letter"<<"\n";
			swap(a[1],a[2]);
		}
		else if(ch=='C')
		{
			//cout<<"this is third letter"<<"\n";
			swap(a[2],a[0]);
		}
	}
//	cout<<"the values of a b c are"<<a[0]<<a[1]<<a[2]<<"\n";
	if(a[0]==1)
	{
		cout<<"1";
	}
	if(a[1]==1)
	{
		cout<<"2";
	}
	if(a[2]==1)
	{
		cout<<"3";
	}
}
void swap(int &num1,int &num2)
{
//cout<<"In the swap function"<<"\n";
int temp;
temp=num1;
num1=num2;
num2=temp;
}

