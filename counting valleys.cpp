#include<bits/stdc++.h>
using namespace std;
void findValleys(char *ptr)
{
	int level=0,val_count=0;
	for(int i=0;ptr[i]!='\0';i++)
	{
		if(ptr[i]=='U')
		{
				level++;
				if(level==0)
					val_count++;
	  }
		else if(ptr[i]=='D')
			level--;
		
	}
	cout<<val_count;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n;
    cin>>n;
    char str[n];
    cin>>str;
    findValleys(str);
    return 0;
}
