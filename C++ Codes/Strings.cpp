#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S1,S2;
    char C;
    getline(cin, S1);
    getline(cin, S2);
    cout<<S1.length()<<" "<<S2.length()<<endl;
    string S3= S1+S2;
    cout<<S3<<endl;
    C=S1[0];
    S1[0]=S2[0];
    S2[0]=C;
    cout<<S1<<" "<<S2;
    return 0;
}
