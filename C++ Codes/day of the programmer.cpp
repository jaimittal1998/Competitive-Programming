#include<bits/stdc++.h>
using namespace std;
void before1917(int num)
{
	if(num%4==0)
		cout<<"12.09."<<num;
	else
		cout<<"13.09."<<num;
}
void after1918(int num)
{
	if((num%4==0&&num%100!=0)||num%400==0)
		cout<<"12.09."<<num;
	else
		cout<<"13.09."<<num;
}
void in1918()
{
	 cout<<"26.09.1918";
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int year;
    cin>>year;
    if(year<=1917)
    	before1917(year);
    else if(year>=1919)
    	after1918(year);
    else
    	in1918();
    return 0;
}
