#ifndef _LEARNER_H
#define _LEARNER_H
#include<iostream>
#include<string>
#include<fstream>
#include "Answer.h"
using namespace std;
class Learner {
	public:
		void respond(string phrase);
		void say(string phrase);
		Answer answer;
};

#endif
