#include <string>
using namespace std;

#ifndef HOSPITAL_H
#define HOSPITAL_H

class Hospital
{
protected:
	long long id;
	string name, location, contact;

public:
	Hospital(string _name, string _location, string _contact);
	Hospital();
	void getInfo();
	void Write(string);
	void Read();
};

#endif