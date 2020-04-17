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
		char S1[101],S2[101];
		cin.ignore(256,'\n');
		cin.getline(S1,101);
		cin.getline(S2,101);
		int max=0,min=0;
		for(int i=0;i<strlen(S1);i++)
		{
			if(S1[i]==S2[i] && S1[i]!='?' && S2[i]!='?') max++;
            if(S1[i]!=S2[i] && S1[i]!='?' && S2[i]!='?') min++;
		}
		cout<<min<<strlen(S1)-max<<'\n';
	}
    
    return 0;
}
