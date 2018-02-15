/*An element in a sorted array can be found in O(log n) time via binary search. 
But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. 
So for instance, 1 2 3 4 5 might become 3 4 5 1 2. 
Devise a way to find an element in the rotated array
*/
#include<bits/stdc++.h>
using namespace std;
int findPivot(int arr[],int last)
{
	int beg=0,mid;
	if(last==beg)
	   return beg;
	while(1)
	{
		mid=(beg+last)/2;
		if(arr[mid]>arr[mid+1])
		   return mid;
		else if(arr[mid]<arr[mid-1])
			return mid-1;
		else if(arr[beg]>=arr[mid])
			last=mid-1;
		else
		    beg=mid+1;
    }
}
int binarySearch(int arr[],int front,int back,int found)
{
	int mid; mid=(front+back)/2;
	while(arr[mid]!=found)
	{
		if(arr[mid]>found)
			back=mid-1;
		else if(arr[mid]<found)
			front=mid+1;
		mid=(front+back)/2;		
	}
	return mid;
}
int main()
{
	unsigned int N;
	cin>>N;
	int arr[N]; int search,pos; 
	for(int i=0;i<N;i++)
		cin>>arr[i];
	cout<<"\nENTER THE ELEMENT TO BE SEARCHED :- ";
	cin>>search;
	int pivot=findPivot(arr,N);
	if(arr[0]<search)
	{
		pos=binarySearch(arr,0,pivot,search);
		cout<<"\n"<<search<<" FOUND AT INDEX "<<pos;
	}
	else if(arr[0]>search)
	{
		pos=binarySearch(arr,pivot+1,N-1,search);
		cout<<"\n"<<search<<" FOUND AT INDEX "<<pos;
	}
	else if(arr[pivot]==search)
		cout<<"\n"<<search<<" FOUND AT INDEX "<<pivot;
	return 0;
}
