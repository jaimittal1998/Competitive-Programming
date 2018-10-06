/*Given an unsorted array of size n. Array elements are in range from 1 to n. 
One number from set {1, 2, …n} is missing and one number occurs twice in array. 
Find these two numbers.*/
#include<bits/stdc++.h>
using namespace std;
void traverseArray(int arr[],int N)
{
	for(int i=1;i<N+1;i++)
	{
		if(arr[abs(arr[i])]>0)
			arr[abs(arr[i])]=-arr[abs(arr[i])];
		else
		{
			cout<<"\nTHE REPEATING ELEMENT IS:- "<<abs(arr[i]);
		}
	}
	for(int i=1;i<N+1;i++)
	{
		if(arr[i]>0)
		{
			cout<<"\nTHE MISSING ELEMENT IS:- "<<i;
			break;
		}
	}
}
int main()
{
	unsigned int N;
	cin>>N;
	cout<<"\nENTER THE ELEMENTS:- ";
	int arr[N+1];
	for(int i=1;i<N+1;i++)
		cin>>arr[i];
	traverseArray(arr,N);
	return 0;
}
	
