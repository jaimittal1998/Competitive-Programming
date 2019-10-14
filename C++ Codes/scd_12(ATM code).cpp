#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	int x,y;
	cin>>x>>y;
	if(x%5==0&&x<=y)
	 cout<<endl<<setprecision(2)<<y-x-0.50;
	else
	 cout<<endl<<setprecision(2)<<y;
	return 0;
}
