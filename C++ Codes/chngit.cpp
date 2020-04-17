#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		int N,temp_N;
		cin>>N; temp_N = N;
		map<int, int> M;
		while(N--)
		{
			int input;
			cin>>input;
			map<int, int>::iterator itr;
			itr = M.find(input);
			if(itr==M.end())
				M.insert(pair<int, int>(input,1));	
			else
				itr->second++;
		}
		int max_frequency = 0;
		map<int, int>::iterator itr;
		for(itr=M.begin(); itr!=M.end(); itr++)
		{
				if(itr->second>max_frequency)
					max_frequency = itr->second;
		}
		cout<<temp_N-max_frequency<<"\n";	
	}
	return 0;	
} 
