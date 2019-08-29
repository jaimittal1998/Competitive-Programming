#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int D_e,D_a,M_e,M_a,Y_e,Y_a;
  cin>>D_a>>M_a>>Y_a;
  cin>>D_e>>M_e>>Y_e;
  int fine=0;
  if(Y_a<=Y_e)
  {
    if(Y_a<Y_e)
      goto print;
    if(M_a<=M_e)
    {
      if(M_a<M_e)
        goto print;  
      if(D_a<=D_e)
         goto print;
      else
         fine = 15*(D_a-D_e);
    }
    else
      fine = 500*(M_a-M_e);
  }
  else
    fine=10000;
  print:
    cout<<fine;
  return 0;
}
