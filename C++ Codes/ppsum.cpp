#include <bits/stdc++.h>
using namespace std;
int sum(int D,int N)
{
	int res = N*(N+1)/2;
	if(D==1)
		return res;
	else
		return sum(D-1,res);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
    	int D,N;
    	cin>>D>>N;
    	cout<<sum(D,N)<<'\n';
	}
	return 0;
}
