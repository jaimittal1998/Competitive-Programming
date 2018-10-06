/*
You are a poor person in ChocoLand. Here, people eat chocolates daily instead of normal food. 
There is only one shop near your home; this shop is closed on Sunday, but open on all other days of the week. 
You may buy at most one box of N chocolates from this shop on each day when it is open.

Currently, it's Monday, and you need to survive for the next S days (including the current day). 
You have to eat K chocolates everyday (including the current day) to survive. 
Do note that you are allowed to buy the a chocolate box and eat from it on the same day.

Compute the minimum number of days on which you need to buy from the shop so that you can survive the next S days, 
or determine that it isn't possible to survive.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains 3 integers N, K and S denoting the number of chocolates in a box, 
the number of chocolates you have to eat everyday to survive and the number of days you need to survive.

Output
For each test case, print a single line containing one integer — the minimum number of days on which you need to buy from the shop to survive, 
or -1 if you will not be able to survive S days.

Constraints
1 = T = 100
1 = N = 100
1 = K = 100
1 = S = 1000
Example
Input:
2
16 2 10
50 48 7

Output:
2
-1

Explanation
Example case 1: One possible solution is to buy a box on day 1 (Monday); it's sufficient to eat from this box up to day 8 (Monday) inclusive. Now, on day 9 (Tuesday), you buy another box and use the chocolates in it to survive days 9 and 10.

Example case 2: You will not be able to survive even if you buy from the shop everyday except every 7-th day.
*/

#include<bits/stdc++.h>
using namespace std;
#define UI unsigned int
struct detail{
	UI N,K,S;
};
int main()
{
	UI T,stock,day;
	again:
	cin>>T;
	if(T>100)
	   goto again;
	detail arr[T];
	for(int i=0;i<T;i++)
	{
		repeat:
		cin>>arr[i].N>>arr[i].K>>arr[i].S;
		if(arr[i].K>100||arr[i].N>100||arr[i].S>1000)
		   goto repeat;
		
	}
	for(int i=0;i<T;i++)
	{
		stock=arr[i].N-arr[i].K; day=1;
		for(int j=2;j<=arr[i].S;j++)
		{
			if((stock<arr[i].K)&&(j%7!=0))
			{
				stock=stock+arr[i].N;
				day++;
			}
			if(stock>=arr[i].K)
			   stock=stock-arr[i].K;
			else
			{
			   cout<<-1;
			   goto come;
		    }
		}
		cout<<day;
		come:
		cout<<endl;
	}
}
