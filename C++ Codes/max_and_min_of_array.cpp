#include<bits/stdc++.h>
using namespace std;
struct output{
	int max;
	int min;
};
output findMaxMin(int arr[],int size)
{
	output obj; int pos;
	if(size%2==0)
	{
		if(arr[0]>arr[1])
		{
			obj.max=arr[0];
			obj.min=arr[1];
		}
		else
		{
			obj.max=arr[1];
			obj.min=arr[0];
		}
		pos=2;
	}
	else
	{
		obj.max=arr[0];
		obj.min=arr[1];
		pos=1;
	}
	while(pos<size-1)
	{
		if(arr[pos]>arr[pos+1])
		{
			if(arr[pos]>obj.max)
				obj.max=arr[pos];
			if(arr[pos+1]<obj.min)
				obj.min=arr[pos+1];
		}
		else
		{
			if(arr[pos+1]>obj.max)
				obj.max=arr[pos+1];
			if(arr[pos]<obj.min)
				obj.min=arr[pos];
		}
		pos+=2;
	}
	return obj;
}
int main()
{
	unsigned int N;
	cin>>N;
	int arr[N]; output obj;
	cout<<"\nENTER THE ELEMENTS:- ";
	for(int i=0;i<N;i++)
		cin>>arr[i];
	obj=findMaxMin(arr,N);
	cout<<"\nTHE MAXIMUM AND MINIMUM ELEMENTS ARE:- "<<obj.max<<" AND "<<obj.min;
	return 0;
}
