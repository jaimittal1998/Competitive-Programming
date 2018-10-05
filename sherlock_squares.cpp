#include<bits/stdc++.h>
using namespace std;
struct range{
	long int a;
	long int b;
};
int findSquare(struct range temp)
{
	int count=0;
	double root;
	for(long int i=temp.a;i<=temp.b;i++)
	{
		root=sqrt(i);
		if(root==ceil(root))
				count++;
	}
	return count;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int q;
	again:
		cin>>q;
		if(q<1||q>100)
				goto again;
		range arr[q];
		for(int i=0;i<q;i++)
				cin>>arr[i].a>>arr[i].b;
		for(int i=0;i<q;i++)
				cout<<findSquare(arr[i])<<'\n';
		return 0;
}
