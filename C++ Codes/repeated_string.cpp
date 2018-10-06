#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,str_final;
	double n,count=0;
	again:
	getline(cin,str);
	cin>>n;
	if(n<1||str.length()>100)
	  goto again;
	for(double i=0;i<n;i++)
		str_final.append(str);
	for(double i=0;i<n;i++)
	{
		if(str_final[i]=='a')
		   count++;
    }
    cout<<count;
	return 0;	
}
