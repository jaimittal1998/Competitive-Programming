#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b)
{
  return (a<b);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout<<std::max({1,2,3,4,5},comp);
  return 0;    
}
