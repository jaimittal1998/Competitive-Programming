#include<bits/stdc++.h>
using namespace std;
void sortandCal(int arr[], int n)
{
	int temp,val=0; const int check=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		temp=0;
		for(int j=i+1;j<n;j++)
		{
			if(abs(arr[i]-arr[j])<=check)
					temp++;
		}
		if(temp>val)
			val=temp;
	}
	cout<<val+1;
}
int main()
{
		ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
    unsigned int N;
    repeat:
    	cin>>N;
    	if(N<2||N>100)
    		goto repeat;
    	int arr[N];
    	for(int i=0;i<N;i++)
    			cin>>arr[i];
    	sortandCal(arr,N);
    	return 0;
}
