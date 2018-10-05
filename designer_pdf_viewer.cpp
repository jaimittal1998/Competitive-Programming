#include<bits/stdc++.h>
using namespace std;
int returnArea(int arr[],char *ptr)
{
	int large=0,len=0,token;
	for(int i=0;ptr[i]!='\0';i++)
	{
		token=ptr[i]-97;
		if(arr[token]>large)
				large=arr[token];
		len++;
	}
	return large*len;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[26];
    char str[11];
    for(int i=0;i<26;i++)
    		cin>>arr[i];
    cin.ignore();
    cin.getline(str,11);
    cout<<returnArea(arr,str);
    return 0;
}
