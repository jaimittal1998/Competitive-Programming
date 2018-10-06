#include<bits/stdc++.h>
using namespace std;
int revisedRussianRoulette(int *a,int t)
{
	int count=0,gate=0;
	for(int i=0;i<t;i++)
	{
		if(a[i]==1&&a[i+1]==1)
		{
			a[i]=0;
			a[i+1]=0;
			count++; gate+=2;
		}
		else if(a[i]==1)
		{
			a[i]=0;
			count++; gate++;
		}
	}
	cout<<count<<" "<<gate;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    repeat:
    int n;
    cin>>n;
    if(n>10000||n<1)
       goto repeat;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	revisedRussianRoulette(arr,n);
}
