#include <iostream>
#include "learner.h"
#include <string>
using namespace std;
int main()
{
	Learner AI;
	for(;;)
	{
		cout<<"\n YOU: ";
		string phrase;
		getline(cin,phrase);
		cout<<"\n CHAPPIE: ";
		AI.respond(phrase);
	}
	return 0;
}
