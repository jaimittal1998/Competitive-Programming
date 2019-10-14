#include<iostream>
using namespace std;
int main()
{
	int size,sum=0,array[100];
	cout<<"ENTER THE SIZE OF ARRAY = ";
	cin>>size;
	cout<<"\nENTER THE PARTICULAR SUM = ";
	cin>>sum;
	cout<<"\nNOW ENTER THE ELEMENTS OF THE ARRAY!";
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	for(int i=0,j=i+1;j<size;i++)
	{
		if(array[i]+array[j]==sum)
		{
		
		 cout<<"\nTHE DESIRED PAIR OF NUMBERS IS = "<<array[i]<<" AND "<<array[j];
		 break;
	}
	}
	return 0;
}
