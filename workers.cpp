#include<bits/stdc++.h>
using namespace std;
void findMinCoin(int size, int *ptr1, int *ptr2)
{
	int tr=INT_MAX,au=INT_MAX,bo=INT_MAX;
	for(int i=0;i<size;i++)
	{
		switch(ptr2[i])
		{
			case 1:
				if(ptr1[i]<tr)
					tr=ptr1[i];
			break;
			case 2:
				if(ptr1[i]<au)
					au=ptr1[i];
			break;
			case 3:
				if(ptr1[i]<bo)
					bo=ptr1[i];
			break;
		}
	}
	if(tr+au<bo)
		cout<<tr+au;
	else
		cout<<bo;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  unsigned int N; bool token=true;
  again:
  	cin>>N;
  	if(N>1000)
  		goto again;
  	int C[N],T[N];
  	for(int i=0;i<N;i++)
  	{
  		repeat:
  			cin>>C[i];
  			if(C[i]<1||C[i]>100000)
  				goto repeat;
		}
		for(int i=0;i<N;i++)
  	{
  		flag:
  			cin>>T[i];
  			if(T[i]<1||T[i]>3)
  				goto flag;
  			if(T[i]!=3&&token==true)
  				token=false;
		}
		if(token==false)
		 findMinCoin(N,C,T);
		else
		{
			int small=INT_MAX;
			for(int i=0;i<N;i++)
			{
				if(C[i]<small)
					small=C[i];
			}
			cout<<small;
		}
		return 0;
}
