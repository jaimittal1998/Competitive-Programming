#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T; int count;
    while(T--)
    {
    	int n;
    	cin>>n;
    	vector<long> V;
    	for(int i=0;i<n;i++)
    	{
    		long temp;
    		cin>>temp;
    		V.push_back(temp);
		}
		count=0;
		for(int i=0;i<n;i++)
		{
			long sum=V[i],product=V[i]; 
			for(int j=i+1;j<n;j++)
			{
				sum=sum+V[j];
				product=product*V[j];
				if(sum==product)
					count++;
			}
		}
		cout<<count+n<<'\n';
	}
    return 0;
}
