#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

#include "Admin.h"
#include "Hospital.h"
#include "Staff.h"

int Admin::numberOfDoctors = 0;

Admin::Admin(string _password){
  password=_password;
}

void Admin::createHospital(string _name, string _location, string _contact)
{
  Hospital hospital(_name, _location, _contact);
  fstream file;
  hospital.Write("Hospitals.txt");
  // cout<<"Returned to admin"<<endl;
}

void Admin::registerDoctor(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
                           long int _salary, string _degree, string _specialisation, long _hospitalId)
{
  Doctor doctor(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _specialisation, _hospitalId);
  doctor.Write();
}

int Admin::getCountOfDisease(string _diseaseName)
{
  fstream file;
  string line;
  int c = 0;
  file.open("Patients.txt", ios::app | ios::in);
  while (!file.eof())
  {
    getline(file, line);
    if (line[0] == 'D' && line[1] == 'i')
    {
      if (!_diseaseName.compare(line.substr(9)))
        c++;
    }
  }
  return c;
}

string Admin::getPassword(){
  return password;
}

void Admin::createManager(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
                           long int _salary, string _degree, string _job, Hospital *_hospital)
{
  Managerial manager(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _job, _hospital);
  manager.Write();
}