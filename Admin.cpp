#include <iostream>
#include<stdio.h>
#include<fstream>
using namespace std;

#include "Admin.h"
#include "Hospital.h"
#include "Staff.h"

int Admin::numberOfDoctors = 0;

void Admin::createHospital(string _name, string _location, string _contact){
    Hospital hospital(_name, _location, _contact);
    fstream file;
    hospital.Write("Hospitals.txt");
}

void Admin::registerDoctor(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
    long int _salary,string _degree, string _specialisation, Hospital *_hospital){
    Doctor doctor(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _specialisation, _hospital);
    doctor.Write();
}