#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long T;
    cin>>T;
    while(T--)
	{
		long N,count=0;
		cin>>N;
		while(N>0)
		{
			if(N%10==4)
				count++;
			N/=10;
		}
		cout<<count<<'\n';
	}
    
    return 0;
}
