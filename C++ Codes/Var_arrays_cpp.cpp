#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,q;
    cin>>n>>q;
    vector<long> arr[n];
    long k[n]; int I[q],J[q];
    for(long i=0;i<n;i++)
    {
    	cin>>k[i]; long temp;
    	for(long j=0;j<k[i];j++)
    	{
    		cin>>temp;
    		arr[i].push_back(temp);
		}
	}
	for(long i=0;i<q;i++)
	{
		cin>>I[i]>>J[i];
	}
	for(long i=0;i<q;i++)
	{
        cout<<arr[I[i]].at(J[i])<<endl;
	}
	return 0;
}
