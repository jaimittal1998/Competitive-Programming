#include<bits/stdc++.h>
using namespace std;
int binary_conv(long t)
{
  long longest=1,count=0;
  vector<int> v1;
  int temp;
  while(t>0)
  {
    temp = t%2;
    v1.push_back(temp);
    t/=2;
  }
  while(!v1.empty())
  {
    if(v1.back()==1)
       count++;
    else
    {
      if(count>longest)
         longest=count;
      count=0;
    }
    v1.pop_back();
  }
  if(count>longest)
     return count;
  else
     return longest;
}
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long n;
  cin>>n;
  cout<<binary_conv(n);
  return 0;
}
