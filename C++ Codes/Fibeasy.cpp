#include<bits/stdc++.h>
using namespace std;
int fib(int n) { 
  double phi = (1 + sqrt(5)) / 2; 
  return round(pow(phi, n) / sqrt(5)); 
} 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long T;
    cin>>T;
    while(T--)
    {
    	long N;
    	cin>>N;
		long p = (long)log2(N); 
        long id = (long)pow(2, p);
		cout<<fib(id-1)%10<<endl;
	}
	return 0;
}
