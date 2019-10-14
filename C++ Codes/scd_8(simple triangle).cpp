#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"ENTER THE NUMBER FOR THE PATTERN = ";
	cin>>num; cout<<endl;
	//ref=num-1;
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<(2*num-1); j++)
		{
			 if(i+j>=num-1&&j-i<=num-1)
			  cout<<" * ";
			 else
			  cout<<"   ";
			
		}
		cout<<endl;
	}
	return 0;
}
