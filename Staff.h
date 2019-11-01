#ifndef STAFF_H
#define STAFF_H

#include "Patient.h"
#include "Hospital.h"
#include "Record.h"

//Staff class
//Need to create association with hospital
class Staff : public Person{
protected:
	int staffId;
	string doj;
	long int salary;
	string degree;
	Hospital *hospital;
public:
    static int numberOfStaff;
	Staff(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree,Hospital *_hospital);
};

//Medical class
class Medical : public Staff{
protected:
	string specialisation;
public:
	Medical(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _specialisation, Hospital *_hospital);
};

//Manegerial class
class Manegerial : public Staff{
protected:
	string job;
public:
	Manegerial(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _job, Hospital *_hospital);
};


//Doctor class
//Inherits Medical class
class Doctor : public Medical{
protected:	
	string registrationNumber;
public:
	Doctor(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _specialisation, string _registrationNumber, Hospital *_hospital);
	void getInfo();
	void addRecord(Patient &patient, string _disease, string _startDate, string _status, Hospital *_hospital);
};

//Nurse class
//Inherits Medical class
class Nurse : public Medical{
protected:
	string nurseId;
public:
	Nurse(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _specialisation, string _nurseId, Hospital *_hospital);
	void getInfo();
};

#endif