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
		int res=0;
		for(int i=1;i<=N;i++)
		{
			int a,b;
			cin>>a>>b;
			res=res^i;
		}
		cout<<res<<'\n';
	}
    
    return 0;
}
