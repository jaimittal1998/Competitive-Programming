#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long n;
	cin>>n;
	vector<long> V;
	for(long i=0;i<n;i++)
	{
		long temp;
		cin>>temp;
		V.push_back(temp);
	}
	sort(V.begin(),V.end());
	vector<long>::iterator itr;
	for(itr=V.begin();itr!=V.end();itr++)
		cout<<*itr<<" ";
	return 0;
}
