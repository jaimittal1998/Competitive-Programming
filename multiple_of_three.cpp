/*
FOR THE PROBLEM STATEMENT PLEASE REFER THE FOLLOWING LINK
https://www.codechef.com/COOK90/problems/MULTHREE
*/

/*
MY CODE CRASHED, WHEN I ENTERED THE SECOND TEST CASE. 
PLEASE HAVE A LOOK!!
*/
#include<bits/stdc++.h>
using namespace std;
struct input{           //Structure for input fields.
	double K;
	unsigned int d_0;
	int d_1;
	int *num;
};

int generate_digit(int *ptr,int pos)     //Function to generate the next digit of the number
 {
 	long sum=0;
 	for(int k=0;k<pos;k++)
 		sum+=ptr[k];
 	return sum%10;
 }
int main()
{
	unsigned int T; long sum_multiple=0; int temp;
	again:
	cin>>T;
	if(T>1000)
	   goto again;
	input arr[T];
	for(int i=0;i<T;i++)
	{
		repeat:
		cin>>arr[i].K>>arr[i].d_0>>arr[i].d_1;
		if(arr[i].d_0>9||arr[i].d_0<1||arr[i].d_0<0||arr[i].d_1>9||arr[i].K<2)
		   goto repeat;
		cout<<endl;
	}
	for(int i=0;i<T;i++)
	{
		arr[i].num[0]=arr[i].d_0;
		arr[i].num[1]=arr[i].d_1;
		for(int j=2;j<arr[i].K;j++)
		{
		   	temp=generate_digit(arr[i].num,j);
		   	arr[i].num[j]=temp;
		}
	}
	for(int i=0;i<T;i++)
	{
		sum_multiple=0;
		for(int j=0;j<arr[i].K;i++)
		    sum_multiple+=arr[i].num[j];
		if(sum_multiple%3==0)
		   cout<<"YES";
		else
		   cout<<"NO";
		cout<<endl;
	}
	 
}
