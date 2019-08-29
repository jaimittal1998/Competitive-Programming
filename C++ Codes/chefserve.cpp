#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    long int T;
    again:
    	cin>>T;
    	if(T>100000||T<1)
				 goto again;
      long int arrK[T],arrP1[T],arrP2[T];
      for(long i=0;i<T;i++)
      {
      	repeat:
      		cin>>arrP1[i]>>arrP2[i]>>arrK[i];
     		if(arrP1[i]<0||arrP2[i]<0||arrK[i]<1)
           goto repeat;
			}
			for(long i=0;i<T;i++)
			{
			  long int temp = (arrP1[i]+arrP2[i])/arrK[i];
			  if(temp%2==0)
           cout<<"CHEF\n";
        else
            cout<<"COOK\n";
      }
      return 0;
}
