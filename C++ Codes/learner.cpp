#include "learner.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void Learner::respond(string phrase)
{
	fstream memory;
	memory.open("memory/memory.txt",ios::in);
	memory.seekg(0,ios::beg);
	while(!memory.eof())
	{
		string identifier;
		getline(memory,identifier);
		if(identifier==phrase)
		{
			string response;
			getline(memory,response);
			answer.say(response);
			return;
		}
	}
	memory.close();
	memory.open("memory/memory.txt",ios::out|ios::app);
	cout<<"I AM AFRAID, I CAN'T RESPOND TO THAT!!  Will you please teach me? '";
	memory<<phrase<<endl;
	
	string userResponse;
	cout<<"\n YOU: ";
	getline(cin, userResponse);
	memory<<userResponse<<endl;
	memory.close();
}
void Learner::say(string phrase)
{
    this->answer.say(phrase);
}
