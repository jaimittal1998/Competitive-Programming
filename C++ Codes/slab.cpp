#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
    	long N; long tax=0;
    	cin>>N; 
    	if(N%100!=0)
    		exit(1);
    	if(N<=250000)
    		cout<<N-tax<<'\n';
    	else if(N<=500000)
    	{
    		tax = (N-250000)*0.05;
    		cout<<N-tax<<'\n';
		}
		else if(N<=750000)
		{
			tax = (N-500000)*0.1 + 12500;
			cout<<N-tax<<'\n';
		}
		else if(N<=1000000)
		{
			tax = (N-750000)*0.15 + 12500 + 25000;
			cout<<N-tax<<'\n';
		}
		else if(N<=1250000)
		{
			tax = (N-1000000)*0.2 + 12500 + 25000 + 37500;
			cout<<N-tax<<'\n';
		}
		else if(N<=1500000)
		{
			tax = (N-1250000)*0.25 + 12500 + 25000 + 37500 + 50000;
			cout<<N-tax<<'\n';
		}
		else if(N>1500000)
		{
			tax = (N-1500000)*0.3 + 12500 + 25000 + 37500 + 50000 + 62500;
			cout<<N-tax<<'\n';
		}
	}
	return 0;
}
