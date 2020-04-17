#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
    	int N,K,count=0;
    	cin>>N>>K;
    	int arr[N];
    	for(int i=0;i<N;i++)
    	{
    		cin>>arr[i];
    		arr[i]+=K;
    		if(arr[i]%7==0)
    			count++;
		}
		cout<<count<<'\n';
	}
	return 0;
}
