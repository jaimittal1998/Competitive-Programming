#include<bits/stdc++.h>
#define UL unsigned long int
#define LONG unsigned long long int
using namespace std;
int check_integer(LONG temp)
{
    int digit,token1,token2;
    token1=0;token2=0;
    while(temp!=0)
    {
        digit=temp%10;
        temp=temp/10;
        if(digit==4)
            token1++;
        else if(digit==7)
            token2++;
    }
    if((token1==token2)&&(token1!=0)&&(token2!=0))
        return 1;
    else
        return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    UL n,small=ULONG_MAX; int pos=-1; int check;
    start:
     cin>>n;
     if(n>10000)
         goto start;
    string name[n]; LONG arr[n];
    for(int i=0;i<n;i++)
    {
        again:
         getline(cin, name[i]);
        if((name[i].length())>10)
            goto again;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        check=check_integer(arr[i]); 
        if(check>0)
        {
            if(arr[i]<small)
            {
                small=arr[i];
                pos=i;
            }
        }
    }
    if(pos==-1)
       cout<<pos;
    else
        cout<<name[pos];
    return 0;
}

