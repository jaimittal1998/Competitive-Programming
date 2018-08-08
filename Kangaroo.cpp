#include<bits/stdc++.h>
using namespace std;
bool kangaroo(int pos1, int vel1, int pos2, int vel2)
{
	while(1)
	{
		if(pos1>pos2&&vel1>=vel2)
			return false;
		else if(pos1<pos2&&vel1<=vel2)
			return false;
		else if(pos1==pos2&&vel1!=vel2)
			return false;
		pos1+=vel1; 
		pos2+=vel2; 
		if(pos1==pos2)
			return true;
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	 unsigned int x1,v1,x2,v2;
	 cin>>x1>>v1>>x2>>v2;
	 bool bin=kangaroo(x1,v1,x2,v2);
	 if(bin==true)
	 	cout<<"YES";
	 else
	 	cout<<"NO";
	 return 0;
}
