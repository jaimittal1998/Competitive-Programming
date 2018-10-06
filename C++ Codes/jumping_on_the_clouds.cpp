#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int n,pos=0; int jump=0;
	again:
		cin>>n;
		if(n<2||n>100)
		   goto again;
		int arr[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
	    while(pos!=n-1)
	    {
	    	if(arr[pos+2]==0)
			{
			  pos+=2;
			  jump++;
		    }
	    	else 
	    	{
	    		pos+=1;
	    		jump++;
			}
		}
		cout<<jump;
	return 0;	
}
