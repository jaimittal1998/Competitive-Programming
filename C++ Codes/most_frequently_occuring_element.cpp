#include<bits/stdc++.h>
using namespace std;
int findFrequency(int arr[],int N)
{
	int pos;
	for(int i=0;i<N;i++)
	{
		arr[arr[i]%N]+=N;
	}
	int max=INT_MIN;
	for(int i=0;i<N;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			pos=i;
		}
	}
	return pos;
}
int main()
{
	unsigned int N;
	cin>>N;
	cout<<"\nENTER THE ELEMENTS:- ";
	int arr[N];
	for(int i=0;i<N;i++)
		cin>>arr[i];
	cout<<"\nTHE MOST FREQUENTLY OCCURING ELEMENT IS:- "<<findFrequency(arr,N);
	return 0;
}
