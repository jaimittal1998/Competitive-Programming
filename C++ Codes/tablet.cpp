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
    	int N; long B,A=0;
    	cin>>N>>B;
    	while(N--)
    	{
    		int W,H; long P;
    		cin>>W>>H>>P;
    		if(P>B)
    			continue;
    		else if((W*H)>A)
    			A=W*H;
		}
		if(A==0)
			cout<<"no tablet\n";
		else
			cout<<A<<'\n';
	}
	return 0;
}
