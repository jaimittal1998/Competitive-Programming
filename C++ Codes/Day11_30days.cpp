#include<bits/stdc++.h>
using namespace std;
int hourglass(int arr[6][6])
{
  int sum=INT_MIN,temp_sum=INT_MIN;
  for(int i=0;i<4;i++)
  {
    for(int j=1;j<5;j++)
    {
      temp_sum=arr[i][j-1]+arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j-1]+arr[i+2][j]+arr[i+2][j+1];
      if(temp_sum>sum)
         sum=temp_sum;
    }
  }
  return sum;
}
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int array[6][6];
  for(int i=0;i<6;i++)
  {
    for(int j=0;j<6;j++)
    {
      cin>>array[i][j];
    }
  }
  cout<<hourglass(array);
  return 0;
}
