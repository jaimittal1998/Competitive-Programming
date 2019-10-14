#include<bits/stdc++.h>
using namespace std;
int main()
{
		fstream file;
		file.open("abc.txt",ios::out|ios::app);
		char str[50], ch; int count=0;
		cout<<"ENTER THE TEXT YOU WISH TO ENTER IN FILE = ";
		cin.getline(str, 50);
		file<<str;
		file.close();
		file.open("abc.txt", ios::in);
		file.seekg(0,ios::beg);
		while(!file.eof())
		{
			file.get(ch);
			if(ch==' ')
				count++;
		}
		cout<<count+1;
		file.close();
		return 0;
}
