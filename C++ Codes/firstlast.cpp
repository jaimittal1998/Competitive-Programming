#include<bits/stdc++.h>
using namespace std;
int returnFirst(long int N)
{
	if(N/10==0)
		return N;
	else
		return returnFirst(N/10);
}
int main()
{
	long int num,first,last;
	cout<<"ENTER THE NUMBER = ";
	cin>>num;
	last= num%10;
  first=returnFirst(num);
  cout<<"\nTHE PRODUCT IS = "<<first*last;
  return 0;
}
