/*An Array of integers is given, both +ve and -ve. 
You need to find the two elements such that their sum is closest to zero
*/
#include<bits/stdc++.h>
using namespace std;
void bubbleSort_find_number(int arr[],int size)
{
	int temp,pos1,pos2;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int beg=0,last=size-1,sum,min_sum=INT_MAX;
	while(beg<last)
	{
		sum=arr[beg]+arr[last];
		if(abs(sum)<abs(min_sum))
		{
			min_sum=sum;
			pos1=beg;
			pos2=last;
		}
		if(sum<0)
		{	
			beg++;	
	    }
		else if(sum>0)
		{
			last--;
		}	
	}
	cout<<"\nTHE NUMBERS ARE:- "<<arr[pos1]<<" AND "<<arr[pos2];
}
int main()
{
	unsigned int N;
	cin>>N;
	int array[N];
	cout<<"\nENTER THE ELEMENTS FOR ARRAY:- ";
	for(int i=0;i<N;i++)
		cin>>array[i];
	bubbleSort_find_number(array, N);
	return 0;
}
