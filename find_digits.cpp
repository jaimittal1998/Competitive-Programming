#include<bits/stdc++.h>
using namespace std;
int findDigits(long n)
{
	long temp=n;
	int count=0,dig;
	while(n>0)
	{
		dig=n%10;
		n/=10;
		if(dig!=0&&temp%dig==0)
			count++;
	}
	return count;
}
int main()
{
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	unsigned int t; int ans;
	again:
	cin>>t;
	if(t>15)
			goto again;
	long arr[t];
	for(int i=0;i<t;i++)
	{
		repeat:
		cin>>arr[i];
		if(arr[i]<=0)
			goto repeat;
	}
  for(int i=0;i<t;i++)
	{
		ans=findDigits(arr[i]);
		cout<<ans;
	}	
	return 0;
}
