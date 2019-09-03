#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int N;
  cin>>N;
  int arr[N];
  for(int i=0;i<N;i++)
  		cin>>arr[i];
  for(int i=N-1;i>=0;i--)
  		cout<<arr[i]<<" ";
  return 0;
}
