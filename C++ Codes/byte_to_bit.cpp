#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T,quo,rem,b,N,B; 
    cin>>T;
    if(T<1||T>10000)
      return 0;
    int arrN[T];
    for(int i=0;i<T;i++)
     {
        cin>>arrN[i];
        if(arrN[i]>1600||arrN[i]<1)
          return 0;
     }
        
    for(int i=0;i<T;i++)
    {
      b=1,N=0,B=0;
      quo=(arrN[i]-1)/26;
      rem=(arrN[i]-1)%26;
      b=pow(2,quo);
      if(rem>=10)
      {
        B=b;
        b=0;
      }
      else if(rem>=2)
      {
        N=b;
        b=0;
      }
      cout<<b<<' '<<N<<' '<<B<<'\n';
    }
    return 0;
}
