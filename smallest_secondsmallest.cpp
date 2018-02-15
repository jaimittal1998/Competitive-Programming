#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int N; int first=INT_MAX,second=INT_MAX-1;
	cin>>N;
	int arr[N];
	cout<<"\nTHE ELEMENTS ARE:- ";
	for(int i=0;i<N;i++)
		cin>>arr[i];
	for(int i=0;i<N;i++)
	{
		if(arr[i]<first&&arr[i]<second)
		{
			second=first;
			first=arr[i];
		}
		else if(arr[i]<second&&arr[i]!=first)
			second=arr[i];
	}
	cout<<"\nTHE SMALLEST AND THE SECOND SMALLEST ElEMENTS ARE:- "<<first<<" "<<second;
	return 0;
}
