#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
  long n;
  cin>>n;
  map<string, long> m1;
  string str[n];
  long temp[n];
  for(long i=0;i<n;i++)
  {
    cin>>str[i];
    cin>>temp[i];
    m1.insert(pair<string, long>(str[i],temp[i]));
  }
  vector<string> Q;
  string query;
  while(cin>>query)
        Q.push_back(query);
  vector<string>::iterator i;      
  for(i= Q.begin(); i!=Q.end(); i++)
  {
    map<string, long>::iterator itr;
    itr=m1.find(*i);
    if(itr == m1.end()) 
        cout << "Not found\n" ; 
    else
        cout << itr->first << "=" << itr->second<<endl ;
  }
  
  return 0;
}
