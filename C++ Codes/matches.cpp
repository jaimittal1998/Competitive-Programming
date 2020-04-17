#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    int digit[10];
    digit[0]=6;digit[1]=2;digit[2]=5;digit[3]=5;
    digit[4]=4;digit[5]=5;digit[6]=6;
    digit[7]=3;digit[8]=7;digit[9]=6;
    while(T--)
	{
		long A,B,sum=0;
		cin>>A>>B;
		sum=A+B; int dig,count=0;
		while(sum>0)
		{
			dig = sum%10;
			sum/=10;
			count+=digit[dig];
		}
		cout<<count<<'\n';
	}
    
    return 0;
}
