#include<bits/stdc++.h>
using namespace std;
struct input{
	
};
int findTime(long long int des)
{
	long long int temp
	if(des==1)
		return 1;
	else if(des==2)
		return 2;
	else
	{
		temp= (-1 + sqrt((1+4*des)))/2;
		
	}
	
}
int main()
{
	unsigned int T;
	repeat:
		cin>>T;
		if(T>200)
			goto repeat;
		long long unsigned int arr[T];
		for(long long int i=0;i<T;i++)
		{
			cin>>arr[i];
		}
		for(long long int i=0;i<T;i++)
		{
			findTime(arr[i]);
		}
		
}
