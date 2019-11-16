#include <string>
using namespace std;

#ifndef ADMIN_H
#define ADMIN_H

#include "Staff.h"
#include "Hospital.h"

class Admin
{
  string password;

public:
  static int numberOfDoctors;
	Admin(string _password);
  void createHospital(string _name, string _location, string _contact);
  void registerDoctor(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
                      long int _salary, string _degree, string _specialisation, long _hospitalId);
  int getCountOfDisease(string _diseaseName);
  string getPassword();
  void createManager(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
                           long int _salary, string _degree, string _job, long _hospitalId);
};

#endif
