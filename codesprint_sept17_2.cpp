#include<bits/stdc++.h>
using namespace std;
int adj(int array[][n+1], int v, int size)  //size = n+1
{
	int count=0;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			if(array[i][j]==1)
			{
				if(i==v||j==v)
					count++;
			}
		}
	}
	return count;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n,m,u,v,temp_v,temp_a,temp_b,special=0;
	long a,b;
  again:
  	cin>>n>>m>>a>>b;
  	if(n<1||n>300000)
  			goto again;
  	if(m>min(n*(n-1)/2,300000)||m<1)
  		goto again;
  	int arr[n+1][n+1];
  	for(int i=0;i<m;i++)
  	{
  		cin>>u>>v;
  		arr[u][v]=1;
		}
		for(int i=1;i<n+1;i++)
		{
			temp_v=adj(arr,i);
			for(int j=1;j<n+1;j++)
			{
				temp_a=adj(arr,j);
				for(int k=1;k<n+1;k++)
				{
					temp_b=adj(arr,k);
					if(a*temp_a<temp_v)
					{
						if(temp_v<b*temp_b)
							special++;
					}
				}
			}
		}
		cout<<special;
  	return 0;
}
