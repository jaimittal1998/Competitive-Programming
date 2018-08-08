#include<bits/stdc++.h>
using namespace std;
bool checkfactorA(int arr[],int size,int num)
{
	for(int i=0;i<size;i++)
	{
		if(num%arr[i]!=0)
			return false;
	}
	return true;
}
bool checkfactorB(int arr[], int size, int num)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]%num!=0)
			return false;
	}
	return true;
}
int getTotal(int A[],int B[], int N, int M)
{
	int low=A[N-1],high=B[0],count=0; bool token1,token2;
	for(int i=low;i<=high;i++)
	{
		token1=checkfactorA(A,N,i);
		if(token1==false)
			continue;
		else
		{
			token2=checkfactorB(B,M,i);
			if(token2==false)
				continue;
			else
			  count++;
	 }
 }
 return count;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int n,m;
    repeat:
    	cin>>n>>m;
    	if(n>10||m>10)
    		goto repeat;
    	int a[n],b[m];
    	for(int i=0;i<n;i++)
    	{
    		again:
    		cin>>a[i];
    		if(a[i]>100)
    			goto again;
			}
			for(int i=0;i<m;i++)
    	{
    		again2:
    		cin>>b[i];
    		if(b[i]>100)
    			goto again2;
			}
			cout<<getTotal(a,b,n,m);
			return 0;
}
