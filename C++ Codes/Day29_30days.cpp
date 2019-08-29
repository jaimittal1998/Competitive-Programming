#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int T;
  cin>>T;
  int N[T],K[T];
  for(int i=0;i<T;i++)
      cin>>N[i]>>K[i];
  for(int i=0;i<T;i++)
  {
    int max=0;
    for(int j=1;j<=N[i];j++)
    {
      for(int k=j+1;k<=N[i];k++)
      {
        if((j & k)>max&&(j & k)<K[i])
           max=(j & k);
      }
    }
    cout<<max<<endl;
  }
  return 0;
}

