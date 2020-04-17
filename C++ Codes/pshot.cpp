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
      start:
    	int N;
    	cin>>N;
    	long S; int A=0,B=0;
    	for(int i=0;i<2*N;i++)
    	{
    		cin>>S[i]; cout<<S[i]<<" input \n";
    		if(i%2==0)
    		{
    			if(S[i]==1)
    				A++;
			}
			else if(i%2!=0)
			{
				if(S[i]==0)
					B++;
			}
			if(A==N-1&&B==2)
			{
				cout<<i+1<<'\n';
				goto start;
			}
		}
		cout<<2*N<<'\n';
    	
	}
	return 0;
}
