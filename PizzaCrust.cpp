#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
	float temp;
	float r,c;
	float area,inner;
	float left,over;
	cin>>r>>c;
	area = 3.14*pow(r,2);
	cout<<area<<endl;
	inner = 3.14*pow(r-c,2);
	cout<<inner<<endl;
	left = area - (area - inner);
	cout<<"left:"<<left<<endl;
	over = (left/area)*100;
	cout << fixed << showpoint;
	cout << setprecision(9)<<over;
//	cout<<over<<endl;
}
