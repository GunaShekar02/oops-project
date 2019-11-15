#include <iostream>
using namespace std;

#include "Patient.h"

//Person contructor
Person::Person(string _name, string _address, string _contact, string _dob, string _aadhar)
{
	name = _name;
	address = _address;
	contact = _contact;
	dob = _dob;
	aadhaar = _aadhar;
}
