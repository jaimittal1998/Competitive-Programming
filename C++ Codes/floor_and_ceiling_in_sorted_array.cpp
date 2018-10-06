/*Given a sorted array and a value x, 
the ceiling of x is the smallest element in array greater than or equal to x, 
and the floor is the greatest element smaller than or equal to x. 
Assume than the array is sorted in non-decreasing order. 
Write efficient functions to find floor and ceiling of x.
*/
#include<bits/stdc++.h>
using namespace std;
struct output{
	int floor,ceiling;
};
output findFloorCeiling(int arr[],int N,int num)
{
	output obj;
	int mid,beg=0,last=N-1;
	if(num==arr[0])
	{
		obj.floor=arr[0];
		obj.ceiling=arr[0];
		return obj;
	}
	if(num>arr[N-1])
	{
		obj.floor=arr[N-1];
		obj.ceiling=-1;
		return obj;
	}
	if(num<arr[0])
	{
		obj.ceiling=arr[0];
		obj.floor=-1;
		return obj;
	}
	
	while(1)
	{
		mid=(beg+last)/2;
		if(arr[mid]==num)
		{
			obj.floor=arr[mid];
			obj.ceiling=arr[mid];
			return obj;
		}
		else if(arr[mid]<num&&arr[mid+1]>num)
		{
			obj.floor=arr[mid];
			obj.ceiling=arr[mid+1];
			return obj;
		}
		else if(arr[mid]>num&&arr[mid-1]<num)
		{
			obj.floor=arr[mid-1];
			obj.ceiling=arr[mid];
			return obj;
		}
		else if(arr[mid]>num)
		{
			last=mid-1;
		}
		else if(arr[mid]<num)
		{
			beg=mid+1;
		}
	}
}
int main()
{
	unsigned int N; int num; output res;
	cin>>N;
	int arr[N];
	cout<<"\nENTER THE ELEMENTS OF THE ARRAY:-";
	for(int i=0;i<N;i++)
		cin>>arr[i];
	cout<<"\nENTER THE NUMBER WHOSE FLOOR AND CEILING YOU WANT TO KNOW:- ";
	cin>>num;
	res=findFloorCeiling(arr,N,num);
	cout<<"\nTHE FLOOR AND CEILING OF "<<num<<" ARE:- "<<res.floor<<" AND "<<res.ceiling;
	return 0;
}
