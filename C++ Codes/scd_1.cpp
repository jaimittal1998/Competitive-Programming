#include<iostream>
using namespace std;
void sum()
{
	int num1,num2;
	char res;
	cout<<"ENTER THE NUMBERS = ";
	cin>>num1>>num2;
	cout<<"THE SUM IS "<<num1+num2;
	cout<<"\n\nDO YOU WISH TO ENTER MORE(Y/N) = ";
	cin>>res;
	if(res=='Y'||res=='y')
	 sum();
	 
}
int main()
{
	sum();
	return 0;
}
