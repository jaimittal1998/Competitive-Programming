#include<bits/stdc++.h>
using namespace std;
struct testcase{
  long N;
  long* A;
  long max;
};
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 unsigned int T;
 cin>>T;
 if(T>1000)
    exit(1);
  testcase arr[T];
  for(int i=0;i<T;i++)
  {
          cin>>arr[i].N;
          if(arr[i].N>100000||arr[i].N<1)
             exit(1);
          arr[i].A = new long [arr[i].N];
          arr[i].max=0;
          for(long j=0;j<arr[i].N;j++)
           {
              cin>>arr[i].A[j];
              if(arr[i].A[j]>arr[i].max)
                 arr[i].max=arr[i].A[j]; 
           }
           delete []arr[i].A;
  }
  for(int i=0;i<T;i++)
          cout<<arr[i].max<<endl;
  return 0;
} 
