#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		if(N<=3)
		{
			int min = 1,max = 1;
			if(N==2)
			{
				int inp1,inp2;
				cin>>inp1>>inp2;
				if(inp2-inp1<=2)
				{
					min = 2;
					max = 2;
			    }
			}
			else
			{
				int inp1,inp2,inp3;
				cin>>inp1>>inp2>>inp3;
				if(inp2-inp1<=2&&inp3-inp2<=2)
				{
					max = 3;
					min = 3;
			    }
				else if((inp2-inp1>2&&inp3-inp2<=2)||(inp2-inp1<=2&&inp3-inp2>2))
					max = 2;
			}
			cout<<'\n'<<min<<' '<<max;
		}
		else
		{
			int prev,count=0;
			vector <int> V;
			for(int i=0;i<N;i++)
			{
				int input;
				cin>>input;
				if(count==0)
				{
					prev = input;
					count++;
			    }
			    else if(input<=prev+2)
			    {
			    	prev = input;
			    	count++;
				}
				else
				{
					V.push_back(count);
					prev = input;
					count = 1;	
				}  
			}
			V.push_back(count);
			sort(V.begin(),V.end());
			cout<<'\n'<<V.front()<<' '<<V.back();
		}
	}
	return 0;
}
