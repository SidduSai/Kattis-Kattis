#include <iostream>
using namespace std;

class submit
{
	public:
	int time;
	char prob;
	string status;
};

int givemycount(submit* sub,int a,char prob)
{
	int count = sub[a].time;
	for(int i=a;i>0;i--)
	{
		if(sub[i-1].prob == prob)
		{
			count = count+20;
		}
	}
	return count;
}

int main()
{
	int a=0,score=0,correctsolved=0;
	submit *sub = new submit[100];
	while(true)
	{
		cin>>sub[a].time;
		if(sub[a].time == -1)
			break;
		cin>>sub[a].prob>>sub[a].status;
		if(sub[a].status == "right")
		{
			score = score + givemycount(sub,a,sub[a].prob);
			correctsolved = correctsolved + 1;
		}
		a = a+1;
	}
	cout<<correctsolved<<" "<<score;
}
