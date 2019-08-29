#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  unsigned int N;
  cin>>N;
  int array[N];
  for(int i=0;i<N;i++)
      cin>>array[i];
  for(int i=N-1;i>=0;i--)
      cout<<array[i]<<' ';
  return 0;    
}
