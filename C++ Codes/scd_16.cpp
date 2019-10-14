#include <iostream>
using namespace std;
int main() 
{
    unsigned int grade[60],n;
    cout<<"ENTER THE SIZE = ";
    cin>>n;
    cout<<"\nNOW ENTER THE ELEMENTS = ";
    for(int i=0;i<n;i++)
        cin>>grade[i];
    for(int i=0;i<n;i++)
    {
        if(grade[i]>=38)
        {
            for(int j=grade[i];;j++)
            {
                if((j%5==0)&&(j-grade[i]<3))
                {
                    grade[i]=j;
                    break;
                }
            }
        }
    }
    cout<<"\nTHE FINAL GRADES ARE:- ";
    for(int i=0;i<n;i++)
        cout<<grade[i]<<" ";
    return 0; 
}

