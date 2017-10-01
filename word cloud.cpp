#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int max_width, num_of_words, ptsize, max_ptsize = 0,total_height = 0,width = 0,temp;
	string word;
	vector<int> word_size,ptsize_vector,height;
	cin>>max_width>>num_of_words;
	while(max_width != 0 && num_of_words != 0)
	{
		for(int i=0;i<num_of_words;i++)
		{
			cin>>word>>ptsize;
			ptsize_vector.push_back(ptsize);
			word_size.push_back(word.size());
			if(max_ptsize > ptsize)
				continue;
			else
				max_ptsize = ptsize;
		}

		for(int i=0;i<num_of_words;i++)
		{
//			cout<<word_size[i]<<" and "<<ptsize_vector[i]<<endl;
			ptsize_vector[i] = 8 + ceil((40*(ptsize_vector[i] - 4))/(max_ptsize - 4));
			word_size[i] = ceil(((double)9/16) * word_size[i] * ptsize_vector[i]);
			cout<<"the value of width is "<<width<<endl;
			if(word_size[i] + width > max_width)
			{
				sort(height.begin(),height.end());
				total_height = total_height + height[height.size()-1];
				height.clear();
				height.push_back(ptsize_vector[i]);
				width = word_size[i];
			}
			else
			{
				width = width + word_size[i];
				height.push_back(ptsize_vector[i]);
			}
			cout<<word_size[i]<<" and "<<ptsize_vector[i]<<endl;
		}
		sort(height.begin(),height.end());
		total_height = total_height + height[height.size()-1];
		cout<<"the max height is "<<total_height<<endl;
		height.clear();
		word_size.clear();
		ptsize_vector.clear();
		total_height = 0;
		width = 0;
		cin>>max_width>>num_of_words;
	}
}
