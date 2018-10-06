#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int S;
    char str[20];
    int fine=0;
    again:
    cin>>S;
    if(S>250)
    		goto again;
    if(S<=90)
    {
    	strcpy(str, "No punishment");
		}
		else if(S<=110)
		{
			fine=(S-90)*300;
			strcpy(str, "Warning");
		}
		else if(S>110)
		{
			fine=(S-90)*500;
			strcpy(str, "License removed");
		}
		cout<<fine<<" "<<str;
		return 0;
}
