#include<bits/stdc++.h>
using namespace std;
void howManyStudents(int arr[],int n,int m)
{
	int array[m];
	for(int i=0;i<m;i++)
		array[i]=0;
	for(int i=0;i<n;i++)
  	 array[arr[i]]++;
  for(int i=0;i<m;i++)
  		cout<<array[i]<<" ";
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	unsigned int m,n;
	again:
	cin>>n>>m;
	if(n>1000||m>1000)
		goto again;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		repeat:
			cin>>arr[i];
			if(arr[i]>m||arr[i]<0)
				goto repeat;
	}
	howManyStudents(arr,n,m);
	return 0;
}
