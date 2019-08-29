#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long n,m;
  cin>>n;
  if(n<1||n>200000)
     exit(1);
  long scores[n];
  for(long i=0;i<n;i++)
  {
    cin>>scores[i];
    if(scores[i]<0)
       exit(1);
  }
  cin>>m;
  if(m<1||m>200000)
     exit(1);
  long alice[m];
  for(long i=0;i<m;i++)
  {
    cin>>alice[i];
    if(alice[i]<0)
       exit(1);
  }
  for(long i=0;i<m;i++)
  {
    long rank=1;
    if(alice[i]>=scores[0])
       goto end;
    for(long j=1;j<n;j++)
    {
      if(scores[j]<scores[j-1])
         rank++;
      if((alice[i]<scores[j-1]&&alice[i]>scores[j])||alice[i]==scores[j])
         break;
    }
    end:
    if(alice[i]<scores[n-1])
      cout<<rank+1<<'\n';
    else
    cout<<rank<<'\n';
  }
  return 0;
}
