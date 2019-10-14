#include<iostream>
using namespace std;
int main()
{
	long int n,k,t[1000];
	int count=0;
	cout<<"\nENTER THE NUMBERS 'N' AND 'K' = ";
	cin>>n>>k;
	cout<<"\nNOW ENTER THE NUMBERS!!";
	for(int i=0; i<n; i++)
	{
		cout<<"\nENTER THE NUMBER = ";
		cin>>t[i];
		if(t[i]%k==0)
		 count++;
	}
	cout<<"THE NO. OF NUMBERS OUT OF 'N' DIVISIBLE BY 'K' IS = "<<count;
	return 0;
}
