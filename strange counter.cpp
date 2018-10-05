#include<bits/stdc++.h>
using namespace std;
long strangeCounter(long t)
{
	long time=1,init_num=3,temp_num;
	temp_num=init_num;
	if(t==1)
		return temp_num;
	while(1)
	{
		if(temp_num==1)
		{
			init_num*=2;
			temp_num=init_num;
			time++;
			if(time==t)
					break;
			continue;
		}
		temp_num--;
		time++;
		if(time==t)
			break;
	}
	return temp_num;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long t;
	repeat:
	cin>>t;
	if(t<1||t>1000000000000)
			goto repeat;
	cout<<strangeCounter(t);
	return 0;
}
