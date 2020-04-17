#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,d;
    cin>>n>>d;
    long arr[n];
    for(long i=0;i<n;i++)
    	cin>>arr[i];
    if(d==n)
    	goto print;
    else if(d>n)
    	d%=n;
    
    	long temp=arr[0]; long i;
    	for(i=1;i<n;i++)
    		arr[i-1]=arr[i];
    	arr[i-1]=temp;
	}
	print:
	for(long i=0;i<n;i++)
    	cout<<arr[i]<<' ';
    return 0;
}
