#include<bits/stdc++.h>
using namespace std;
class input{
	unsigned int N;
public:
	char res[10];
	void findWinner(int size,int *ptr1, int *ptr2)
	{
		int sumA=0,sumB=0;
		int large_A=INT_MIN,large_B=INT_MIN,pos_A,pos_B;
		for(int i=0;i<size;i++)
		{
			if(large_A<ptr1[i])
			{
				large_A=ptr1[i];
				pos_A=i;
			}
			if(large_B<ptr2[i])
			{
				large_B=ptr2[i];
				pos_B=i;
			}
		}
		ptr1[pos_A]=0; ptr2[pos_B]=0;
		for(int i=0;i<size;i++)
		{
			sumA+=ptr1[i];
			sumB+=ptr2[i];
		}
		if(sumA<sumB)
			strcpy(res,"Alice");
		else if(sumA>sumB)
			strcpy(res,"Bob");
		else
			strcpy(res,"Draw");
	}
	void getinput()
	{
		again:
		cin>>N;
		if(N>100||N<2)
			goto again;
		int *A= new int[N];
		int *B= new int[N];
		for(int i=0;i<N;i++)
		{
			rpt:
			cin>>A[i];
			if(A[i]>1000)
				goto rpt;
		}
		for(int i=0;i<N;i++)
		{
			rpt1:
			cin>>B[i];
			if(B[i]>1000)
				goto rpt1;
		}
		findWinner(N,A,B);
		
	}
};
int main()
{
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int T;
    repeat:
    cin>>T;
    if(T>100)
    	goto repeat;
    input obj[T];
    for(int i=0;i<T;i++)
    {
    	obj[i].getinput();
	  }
	  for(int i=0;i<T;i++)
	  {
	  	cout<<obj[i].res<<'\n';
		}
		return 0;
}
