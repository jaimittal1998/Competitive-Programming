#include<bits/stdc++.h>
#include<vector>
using namespace std;
long int reverse(long int num)
{
	long int var=0,dig,numreversed=0;
	vector<int> revnum;
	while(num>0){
		dig=num%10;
		num=num/10;
		revnum.push_back(dig);
	}
	int ptr;
	for(int i=0;i<revnum.size();i++)
	{
		ptr=revnum.back();
		numreversed+=(ptr)*pow(10,var++);
		revnum.pop_back();
	}
	cout<<numreversed<<" ";
	return numreversed;
}
void findBeautiful(long int a, long int b, long int c)
{
	int count=0;
	for(int i=a; i<=b;i++)
	{
		if(abs(i-reverse(i))%c==0||abs(i-reverse(i))==0)
				count++;
		
	}
	cout<<count;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long int i,j,k;
  repeat:
  cin>>i>>j>>k;
  if(i<1||j<1||k<1)
  		goto repeat;
  findBeautiful(i,j,k);
  return 0;
}
