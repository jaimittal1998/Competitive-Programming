#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N; int x,a,b;
    cin>>N;
    vector<int> V;
    for(int i=0;i<N;i++)
    {
    	int temp;
    	cin>>temp;
    	V.push_back(temp);
	}
	cin>>x;
	V.erase(V.begin()+x-1);
	cin>>a>>b;
	V.erase(V.begin()+a-1,V.begin()+b-1);
	cout<<V.size()<<endl;
	vector<int>::iterator itr;
	for(itr=V.begin();itr!=V.end();itr++)
		cout<<*itr<<" ";
}
