#include<bits/stdc++.h>
using namespace std;
unsigned int N;
bool driver(int *ptr)
{
	int small=INT_MAX; int count;
	for(int i=0;i<N;i++)
	{
		if(ptr[i]<small&&ptr[i]>0)
		   small=ptr[i];
	}
	count=0;
	for(int i=0;i<N;i++)
	{
		if(ptr[i]>0)
		{
			ptr[i]-=small;
			count++;
		}
	}
	if(count!=0)
	{
	  cout<<count;
	  return true;
    }
    else
      return false;

}
int main()
{
	bool token=true;
	again:
	cin>>N;
	if(N>1000)
	  goto again;
	int arr[N];
	for(int i=0;i<N;i++)
	{
		repeat:
		cin>>arr[i];
		if(arr[i]<1||arr[i]>1000)
		   goto repeat;
	}
	while(token)
	{
	   token=driver(arr);
	   cout<<endl;
    }
	     
}
