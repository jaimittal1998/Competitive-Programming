#include<bits/stdc++.h>
using namespace std;
void findKelements(int arr[],int N,int K)
{
	int temp;
	for(int i=0;i<K;i++)
	{
		for(int j=0;j<N-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nTHE ELEMENTS ARE:- ";
	for(int i=N-1;i>N-K-1;i--)
		cout<<arr[i]<<" ";
}
int main()
{
	unsigned int N,K;
	cin>>N;
	int arr[N];
	cout<<"\nENTER THE ELEMENTS:- ";
	for(int i=0;i<N;i++)
		cin>>arr[i];
	cout<<"\nHOW MANY LARGEST ELEMENTS YOU WANT:- ";
	cin>>K;
	findKelements(arr,N,K);
	return 0;
}
