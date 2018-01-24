#include<bits/stdc++.h>
using namespace std;
#define UI unsigned int
struct detail{
	UI N,K,S;
};
int main()
{
	UI T,stock,day;
	again:
	cin>>T;
	if(T>100)
	   goto again;
	detail arr[T];
	for(int i=0;i<T;i++)
	{
		repeat:
		cin>>arr[i].N>>arr[i].K>>arr[i].S;
		if(arr[i].K>100||arr[i].N>100||arr[i].S>1000)
		   goto repeat;
		
	}
	for(int i=0;i<T;i++)
	{
		stock=arr[i].N-arr[i].K; day=1;
		for(int j=2;j<=arr[i].S;j++)
		{
			if((stock<arr[i].K)&&(j%7!=0))
			{
				stock=stock+arr[i].N;
				day++;
			}
			if(stock>=arr[i].K)
			   stock=stock-arr[i].K;
			else
			{
			   cout<<-1;
			   goto come;
		    }
		}
		cout<<day;
		come:
		cout<<endl;
	}
}
