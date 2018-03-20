#include<bits/stdc++.h>
using namespace std;
struct input{
	unsigned int N;
	unsigned long int U,D;
	unsigned long int H[100];
};
void printHill(unsigned int N, unsigned long int U, unsigned long int D,unsigned long int H[])
{
	  bool para=true; int i;
		for( i=0;i<N-1;i++)
		{
				if(H[i+1]>H[i])
				{
					if(H[i+1]-H[i]<=U)
					   continue;
					else
					   break;
				}
				else if(H[i+1]<H[i])
				{
						if(H[i]-H[i+1]<=D)
							 continue;
						else if(para==true)
						{
							para=false;
							continue;
						}
						else
							 break;								
				}
				else
					 continue;
		}
		cout<<"\n"<<i+1;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  unsigned int T;
  again:
  cin>>T;
  if(T>100)
  	goto again;
  input array[T];
  for(int i=0;i<T;i++)
  {
  	repeat:
  	cin>>array[i].N>>array[i].U>>array[i].D;
  	if(array[i].N>100||array[i].D>1000000||array[i].U>1000000)
  		goto repeat;
  	for(int j=0;j<array[i].N;j++)
  			cin>>array[i].H[j];
	}
	for(int i=0;i<T;i++)
			printHill(array[i].N,array[i].U,array[i].D,array[i].H);
	
	return 0;
}
