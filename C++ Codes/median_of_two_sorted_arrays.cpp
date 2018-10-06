/*Median of two sorted arrays of same size

There are 2 sorted arrays A and B of size n each. 
Write an algorithm to find the median of the array obtained after merging the above 2 arrays(i.e. array of length 2n).
*/



#include<bits/stdc++.h>
using namespace std;
float findMedian(int arr1[],int arr2[],int size)
{
	int i=0,j=0,k=0,mergeArr[2*size]; int new_size=2*size;
	while(i<size&&j<size)
	{
		if(arr1[i]<arr2[j])
			mergeArr[k++]=arr1[i++];
		else
			mergeArr[k++]=arr2[j++];
    }
    if(i<size)
    {
    	while(i<size)
    	{
    		mergeArr[k++]=arr1[i++];
		}
	}
	else if(j<size)
	{
		while(j<size)
    	{
    		mergeArr[k++]=arr2[j++];
		}	
	}
	cout<<"\nTHE MERGED ARRAY IS:- ";
	for(int i=0;i<new_size;i++)
		cout<<mergeArr[i]<<" ";
  	float median=(mergeArr[new_size/2]+mergeArr[(new_size/2)-1])/2;
    return median;
}
int main()
{
	unsigned int N; float median;
	cin>>N;
	int arr1[N],arr2[N];
	cout<<"\nENTER THE ELEMENTS(SORTED) FOR FIRST ARRAY:- ";
	for(int i=0;i<N;i++)
		cin>>arr1[i];
	cout<<"\nENTER THE ELEMENTS(SORTED) FOR SECOND ARRAY:- ";
	for(int i=0;i<N;i++)
		cin>>arr2[i];
	median=findMedian(arr1,arr2,N);
	cout<<"\nTHE MEDIAN OF THE MERGED-SORTED ARRAY IS:- "<<median;
	return 0;
}
