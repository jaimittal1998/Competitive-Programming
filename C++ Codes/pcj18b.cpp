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
    	int N;
    	cin>>N;
    	long res=0;
    	for(int i=N;i>0;i-=2)
    	{
    		res+=i*i;
		}
		cout<<res<<'\n';
	}
	return 0;
}
