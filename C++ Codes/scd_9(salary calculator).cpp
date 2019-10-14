#include<iostream>
using namespace std;
int main()
{
	float gross_salary,house_rent,d_allowance,basic_salary;
	cout<<"ENTER THE BASIC SALARY = ";
	cin>>basic_salary;
	d_allowance=0.4*basic_salary; house_rent=0.2*basic_salary;
	gross_salary= basic_salary+d_allowance+house_rent;
	cout<<"THE GROSS SALARY IS = "<<gross_salary;
	return 0;
}
