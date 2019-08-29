#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
  unsigned int T;
  cin>>T;
  string arr[T];
  cin.ignore(256,'\n');
  for(int i=0;i<T;i++)
    getline(cin, arr[i]);    
  for(int i=0;i<T;i++)
  {
    for(int j=0;j<arr[i].length();j+=2)
        cout<<arr[i].at(j);
    cout<<" ";
    for(int j=1;j<arr[i].length();j+=2)
        cout<<arr[i].at(j);
    cout<<endl;
  }
  return 0;
}
