#include<bits/stdc++.h>
using namespace std;
struct input{
	bool arr[5];
};
void findResult(bool arr[])
{
	int count=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==true)
		   count++;
	}
	switch(count)
	{
		case 0:
			cout<<"Beginner";
			break;
		case 1:
			cout<<"Junior Developer";
			break;
		case 2:
			cout<<"Middle Developer";
			break;
		case 3:
			cout<<"Senior Developer";
			break;
		case 4:
			cout<<"Hacker";
			break;
		case 5:
			cout<<"Jeff Dean";
			break;
		default:
			break;
		
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	unsigned int N;
	again:
	cin>>N;
	if(N>5000)
       goto again;
	input array[N];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<5;j++)
				cin>>array[i].arr[j];
	}
	for(int i=0;i<N;i++)
	{
	   findResult(array[i].arr);
	   cout<<'\n';
	}    
}
