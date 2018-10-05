#include<bits/stdc++.h>
using namespace std;
string appendAndDelete(char init[], char des[], int k)
{
    if(strcmp(init,des)==0&&k>1)
            return "Yes";
   
    else
    {
        int init_len=strlen(init);
        int des_len=strlen(des);
        int sum;
        for(int i=0;;i++)
        {
            if(init[i]==des[i])
                continue;
            else
            {
                sum=(init_len-i)+(des_len-i);
                if(k-sum>=0)
                {
                    if(sum==k||(k-sum)%2==0||(k-sum)>=2*i)
                            return "Yes";
                    else
                            return "No";
                }
                return "No";
            }
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s[102],t[102];
    int k;
    cin.getline(s, 102);
    cin.getline(t, 102);
    cin>>k;
    cout<<appendAndDelete(s,t,k);
    return 0;
}
