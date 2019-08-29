#include<bits/stdc++.h>
using namespace std;
int magic[8][3][3]={
            { { 8, 1, 6 }, { 3, 5, 7 }, { 4, 9, 2 } }, 
            { { 6, 1, 8 }, { 7, 5, 3 }, { 2, 9, 4 } }, 
            { { 4, 9, 2 }, { 3, 5, 7 }, { 8, 1, 6 } }, 
            { { 2, 9, 4 }, { 7, 5, 3 }, { 6, 1, 8 } }, 
            { { 8, 3, 4 }, { 1, 5, 9 }, { 6, 7, 2 } }, 
            { { 4, 3, 8 }, { 9, 5, 1 }, { 2, 7, 6 } }, 
            { { 6, 7, 2 }, { 1, 5, 9 }, { 8, 3, 4 } }, 
            { { 2, 7, 6 }, { 9, 5, 1 }, { 4, 3, 8 } }, 
};
int checkMagicSq(int arr[3][3])
{
  int cost=INT_MAX;
  for(int i=0;i<8;i++)
  {
    int temp_cost=0;
    for(int j=0;j<3;j++)
    {
      for(int k=0;k<3;k++)
      {
        if(arr[j][k]!=magic[i][j][k])
          temp_cost+=abs(arr[j][k]-magic[i][j][k]);
      }
    }
    if(temp_cost<cost)
       cost=temp_cost;
  }
  return cost;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int inputsq[3][3];
  for(int i=0;i<3;i++)
  {
          for(int j=0;j<3;j++)
          {
            cin>>inputsq[i][j];
            if(inputsq[i][j]<1||inputsq[i][j]>9)
               exit(1);
          }
  }
  cout<<checkMagicSq(inputsq);
  return 0;
}
