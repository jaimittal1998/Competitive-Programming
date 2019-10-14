#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r=0;
	vector<int> V;
		V.push_back(10);
		V.push_back(20);
		V.push_back(30);
		V.push_back(30);
	cout<<V[0]<<endl;
	for(int i=0;i<V.size();i++)
		cout<<V[i];
	cout<<"\nAfter deleting\n";
	vector<int>::iterator i = V.begin();
	while(V.size()!=1)
	{
		vector<int>::iterator ptr = i;
		V.erase(ptr);
		i++;
		cout<<"\nsize = "<<V.size()<<endl;
	}
	for(int i=0;i<V.size();i++)
		cout<<V[i];
	cout<<endl<<V[0];
	cout<<"end";
	return 0;
}
