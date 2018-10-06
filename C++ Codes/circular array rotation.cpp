#include<bits/stdc++.h>
using namespace std;
void rotateArrayandAnswer(int arr[], long n, long k, unsigned int q, int qrr[])
{
	int temp; long j;
	for(int i=0;i<k;i++)
	{
		temp=arr[0];
		arr[0]=arr[n-1];
		j=n-1;
		while(j>1)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=temp;
	}
  for(int i=0;i<q;i++)
  		cout<<arr[qrr[i]]<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,k;
    unsigned int q;
    repeat:
    cin>>n>>k>>q;
    if(n<1||k<1||q<1||q>500)
    		goto repeat;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	again:
    	cin>>arr[i];
    	if(arr[i]<1||arr[i]>100000)
    			goto again;
		}
		int qrr[q];
		for(int i=0;i<q;i++)
		{
			flag:
			cin>>qrr[i];
			if(qrr[i]>n)
				goto flag;
		}
		rotateArrayandAnswer(arr,n,k,q,qrr);
		return 0;
}
