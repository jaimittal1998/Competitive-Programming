#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N1,N2;
    cin>>N1>>N2;
    if(N1>N2)
    	cout<<N1-N2;
    else
    	cout<<N1+N2;
    
    return 0;
}
