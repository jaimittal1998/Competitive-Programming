//theatre square
#include<bits/stdc++.h>
#define LONG unsigned long long
using namespace std;
int main()
{
	LONG n,m,a;
	cin>>n>>m>>a;
	if(n>=m)
		if(a>=m)
		{	
			if(n%a==0)
				cout<<(n/a);
			else
		   		cout<<(n/a)+1;
		}
		else
		{
			if(m%a==0&&n%a==0)
		   		cout<<((n/a)*(m/a));
			else if(m%a==0&&n%a!=0)
		   		cout<<(((n/a)+1)*(m/a));
			else if(m%a!=0&&n%a!=0)
		   		cout<<(((n/a)+1)*((m/a)+1));
		}
	else
	 cout<<0;
	return 0;
}
