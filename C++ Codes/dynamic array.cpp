#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,Q; int lastAnswer = 0;
    cin>>N>>Q;
    vector<long> V[N];
    while(Q--)
    {
    	int type; long x,y;
    	cin>>type>>x>>y;
    	if(type==1)
    	{
    		int index = (x^lastAnswer)%N;
    		V[index].push_back(y);
		}
		else if(type==2)
		{
			int index_seq = (x^lastAnswer)%N;
			int index = y%V[index_seq].size();
			lastAnswer = V[index_seq].at(index);
			cout<<'\n'<<lastAnswer;
		}
	}
	return 0;
    
}
