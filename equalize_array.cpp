#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int n;
    again:
    	cin>>n;
    	if(n>100)
    	   goto again;
 	    int arr[n];
 	    for(int i=0;i<n;i++)
 	    		cin>>arr[i];
   		int map[101];
   		for(int i=0;i<101;i++)
   				map[i]=0;
   		for(int i=0;i<n;i++)
   				map[arr[i]]++;
		int high=0;		
	    for(int i=0;i<101;i++)
	    {
	    	if(map[i]>high)
		       high=map[i];
		}
		cout<<n-high;
    return 0;
}
