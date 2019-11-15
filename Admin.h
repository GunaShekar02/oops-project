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
  void createHospital(string _name, string _location, string _contact);
  void registerDoctor(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
                      long int _salary, string _degree, string _specialisation, Hospital *_hospital);
  int getCountOfDisease(string _diseaseName);
};

#endif