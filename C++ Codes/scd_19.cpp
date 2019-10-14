#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
	unsigned long int n; int level=0,count=0,temp;
	char str[1000000];
	start:
	cin>>n;
	if(n<2||n>1000000)
	 goto start;
	cin.getline(str,n);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='U')
        {
            if(level==0)
                temp=1;
            level++;
        }
            
        else if(str[i]=='D')
        {  
            if(level==0)
                temp=-1;
            level--;
        }
        
        if(temp==-1&&level==0)
            count++;
        
        
	}
	cout<<count;
    return 0;
}

