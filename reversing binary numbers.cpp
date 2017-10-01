#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int a,n,i[10];
	cout<<"enter the number : "<<"\n";
	cin>>a;
	std::cout<<"a in binary format is :"<<std::bitset<8>(a) <<std::endl;
	int b=bitset<8>(a);
	while(b/10==0)
	{
	int j=0;
	n=b%10;
	//cout<<n<<"\n";
	i[j]=n;
	j++;
	b=b/10;
	}
	cout<<"the reversed value of b is : ";
	for(int k=0;k<5;k++)
	{
		cout<<i[k];
	}
}
/*	int decimal_binary(int n)
{
    int rem, i=1, binary=0;
    while (n!=0)
    {
        rem=n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}
}*/

