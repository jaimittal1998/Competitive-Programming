#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t; 
	cin>>t;
    while(t--)
	{
        int n, m, k; 
		cin>>n>>m>>k;
        vector<bool> ignored(n + 1, 0);
        vector<bool> tracked(n + 1, 0);
        for(int p = 0; p < m; p++)
		{
			int x; 
			cin>>x; 
			ignored[x] = 1;
		}
        for(int p = 0; p < k; p++)
		{
			int x; 
			cin>>x; 
			tracked[x] = 1;
		}
        int both(0);
        int neither(0);
        for(int p = 1; p <= n; p++)
		{
            both += (ignored[p] && tracked[p]);
            neither += 1 - (ignored[p] || tracked[p]);
        }

        cout<<both<<neither<<'\n';
    }

    return 0;
}
