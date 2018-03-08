#include <iostream>
using namespace std;

int main()
{
	int h1,h2,m1,m2,s1,s2,h,m,s;
	char temp;
	cin>>h1>>temp>>m1>>temp>>s1;
	cin>>h2>>temp>>m2>>temp>>s2;
	s = s2-s1;
	if(s < 0)
	{
		s = 60+s;
		m2--;
	}
	m = m2-m1;
	if(m < 0)
	{
		m = 60+m;
		h2--;
	}
	h = h2-h1;
	if(h < 0)
	{
		h = 24+h;
	}
	if(h+m+s == 0)
	{
        h += 24;
    }
    
	cout << (h<10 ? "0" : "") << h << ":" << (m<10 ? "0" : "") << m << ":" << (s<10 ? "0" : "") << s << endl;
}
