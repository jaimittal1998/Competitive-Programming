/*Find the Missing Number
You are given a list of n-1 integers and these integers are in the range of 1 to n. 
There are no duplicates in list. 
One of the integers is missing in the list. 
Write an efficient code to find the missing integer.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int N; int total;
	cin>>N;
	int arr[N-1];
	for(int i=0;i<N-1;i++)
		cin>>arr[i];
	total=N*(N+1)/2;
	for(int i=0;i<N-1;i++)
	    total-=arr[i];
	cout<<"\nTHE MISING NUMBER IS :"<<total;
	return 0;
}
