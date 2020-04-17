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
    	long N,count=0;
    	cin>>N; int div[6] = {100,50,10,5,2,1}; int i=0;
    	while(N)
    	{
    		count+= N/div[i];
    		N%=div[i];
    		i++;
		}
		cout<<count<<'\n';
	}
	return 0;
}

