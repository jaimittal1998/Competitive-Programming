#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  unsigned int n;
  cin>>n;
  if(n%2!=0)
     cout<<"Weird";
  else
  {
    if(n<=5)
      cout<<"Not Weird";
    else if(n<=20)
      cout<<"Weird";
    else
      cout<<"Not Weird";
  }
  return 0;
}
