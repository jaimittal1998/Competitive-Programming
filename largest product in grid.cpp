#include<bits/stdc++.h>
using namespace std;
void findmaxproduct(int arr[20][20])
{
	long int max=0,product;
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
			 if((j-3)>=0)
			 {
			 		product=arr[i][j]*arr[i][j-1]*arr[i][j-2]*arr[i][j-3];
			 		if(product>max)
			 			max=product;
			 }
			 if((i-3)>=0)
			 {
			 		product=arr[i][j]*arr[i-1][j]*arr[i-2][j]*arr[i-3][j];
			 		if(product>max)
			 			max=product;
			 }
			 if((j-3)>=0&&(i-3)>=0)
			 {
			 		product=arr[i][j]*arr[i-1][j-1]*arr[i-2][j-2]*arr[i-3][j-3];
			 		if(product>max)
			 			max=product;
			 }
			 if((j+3)<=19&&(i+3)<=19)
			 {
			 		product=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
			 		if(product>max)
			 			max=product;
			 }
			 if((j-3)>=0&&(i+3)<=19)
			 {
			 		product=arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
			 		if(product>max)
			 			max=product;
			 }
			 if((i-3)>=0&&(j+3)<=19)
			 {
			 		product=arr[i][j]*arr[i-1][j+1]*arr[i-2][j+2]*arr[i-3][j+3];
			 		if(product>max)
			 			max=product;
			 }
		}
	}
	cout<<max;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int arr[20][20];
  for(int i=0;i<20;i++)
  		for(int j=0;j<20;j++)
  				cin>>arr[i][j];
  		cout<<'\n';
  findmaxproduct(arr);
  return 0;
}
