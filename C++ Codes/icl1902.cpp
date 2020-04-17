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
		int count=0;
		while(N>0)
		{
			count++;
			N=N-pow((int)sqrt(N),2);	
		}
		cout<<count<<'\n';
	}
    
    return 0;
}
