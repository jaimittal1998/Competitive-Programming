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
    	int N;	int arr[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    	cin>>N;
    	while(N--)
    	{
    		int i;
    		cin>>i;
    		int val;
    		cin>>val;
    		if(val>arr[i])
    			arr[i]=val;
		}
		int sum=0;
		for(int i=1;i<=8;i++)
			sum+=arr[i];
		cout<<sum<<'\n';
	}
	return 0;
}
