#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int lenght[100],pos=0;
void output(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!=' ';i++)
        count++;
    lenght[pos]=count;
    pos++;
}

void input()
{
    char string[200]; int len=0;
    cin.getline(string,200);
    for(int i=0;string[i]!='\0';i++)
        len++;
    for(int i=0;string[i]!='\0';i++)
        string[i]=string[len-i-1];
    output(string);

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int T; 
    start:
    cin>>T;
    if(T>100)
        goto start;
    for(int i=0;i<T;i++)
        input();
    for(int i=0;i<T;i++)
        cout<<lenght[i]<<'\n';
    
    return 0;
}

