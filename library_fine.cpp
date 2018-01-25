#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int D_a,D_e,M_a,M_e,Y_a,Y_e;
	again:
	cin>>D_a>>M_a>>Y_a;
	cin>>D_e>>M_e>>Y_e;
	if(D_a>31||D_e>31||M_a>12||M_e>12||Y_a>3000||Y_e>3000)
	   goto again;
	if(Y_a<Y_e)
	   cout<<0;
    else if(Y_a==Y_e&&M_a<M_e)
        cout<<0;
    else if(Y_a==Y_e&&M_a==M_e&&D_a<=D_e)
        cout<<0;
	else if(Y_a==Y_e&&M_a==M_e&&D_a>D_e)
	   cout<<15*(D_a-D_e);
	else if(Y_a==Y_e&&M_a>M_e)
	   cout<<500*(M_a-M_e);
	else
	   cout<<10000; 
	return 0;		
}
