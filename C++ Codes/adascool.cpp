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
    	int N,M;
    	cin>>N>>M;
    	if((N*M)%2==0)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
	}
    return 0;
}
