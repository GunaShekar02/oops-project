#include <string>
using namespace std;

#ifndef HOSPITAL_H
#define HOSPITAL_H

class Hospital{
protected:
	string name, location, contact;
public:
	Hospital(string _name, string _location, string _contact);
	void getInfo();	
};

#endif