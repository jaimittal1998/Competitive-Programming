#include<bits/stdc++.h>
using namespace std;
int main()
{
	char x,y;
	int num1,num2;
	long sum=0;
	cin>>x>>num1>>y>>num2;
	for(int i=0;i<num1;i++)
	{
		cout<<x;
	}
	for(int i=0;i<num2;i++)
	{
		cout<<y;
	}
	sum=(int)x+(int)y;
	cout<<sum; 
	return 0;
}
