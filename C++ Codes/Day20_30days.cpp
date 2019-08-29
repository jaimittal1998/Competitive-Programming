#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n;
  cin>>n;
  long arr[n];
  for(int i=0;i<n;i++)
      cin>>arr[i];
  int numSwaps=0;
  long temp;
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-1-i;j++)
    {
       if(arr[j]>arr[j+1])
       {
         temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
         numSwaps++;
       }
    }
  }
  cout<<"Array is sorted in "<<numSwaps<<" swaps";
  cout<<"\nFirst Element: "<<arr[0];
  cout<<"\nLast Element: "<<arr[n-1];
  return 0;  
}
