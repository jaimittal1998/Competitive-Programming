#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N; int even=0,odd=0;
    while(N--)
    {
    	int input;
    	cin>>input;
    	if(input%2==0)
    		even++;
    	else
    		odd++;
	}
	if(even>odd)
		cout<<"READY FOR BATTLE";
	else
		cout<<"NOT READY";
	return 0;
}
