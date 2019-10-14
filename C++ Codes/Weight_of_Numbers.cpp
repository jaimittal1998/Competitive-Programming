#include<bits/stdc++.h>
using namespace std;
struct Input{
	unsigned long long int N;
	unsigned int W;
};
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  unsigned int T,D_N,D_1; unsigned long long int num; const unsigned int M = 1000000007; int number;
  again:
  	cin>>T;
  	if(T>100000)
  		goto again;
  Input arr[T];
  for(int i=0;i<T;i++)
  {
  	repeat:
  	cin>>arr[i].N>>arr[i].W;
  	if(arr[i].W>300)
  		goto repeat;
	}
	for(int i=0;i<T;i++)
	{
		number=0;
		for(unsigned long long int j=pow(10,arr[i].N-1)+arr[i].W;j<pow(10,arr[i].N);j++)
		{
			num=j;
			D_N=j%10;
			while(num>0)
			{
				D_1=num%10;
				num/=10;
			}
			if((D_N-D_1)==arr[i].W)
				{
					number=(number%M)+1;
				}
		}
		cout<<number;
	}
}
