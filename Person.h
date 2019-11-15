#include <string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

//Person class
//This is the main class
class Person
{
protected:
	string name, address, contact, dob, aadhaar;

public:
	Person(string _name, string _address, string _contact, string _dob, string _aadhar);
};

#endif
