#ifndef STAFF_H
#define STAFF_H

#include "Patient.h"
#include "Hospital.h"
#include "Record.h"

//Staff class
//Need to create association with hospital
class Staff : public Person
{
protected:
	int staffId;
	string doj;
	long int salary;
	string degree;
	long _hospitalId;

public:
	static int numberOfStaff;
	Staff(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
				long int _salary, string _degree, long _hospitalId);
};

//Medical class
class Medical : public Staff
{
protected:
	string specialisation;

public:
	Medical(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
					long int _salary, string _degree, string _specialisation, long _hospitalId);
};

//Manegerial class
class Manegerial : public Staff
{
protected:
	string job;

public:
	Manegerial(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
						 long int _salary, string _degree, string _job, long _hospitalId);
	void registerPatient(string _name, string _address, string _contact, string _dob, string _aadhar);
	void Write();
};

//Doctor class
//Inherits Medical class
class Doctor : public Medical
{
protected:
	int registrationNumber;

public:
	Doctor(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
				 long int _salary, string _degree, string _specialisation, long _hospitalId);
	void getInfo();
	void addRecord(long _patientId, string _disease, string _startDate, string _status, long _hospitalId);
	void Read();
	void Write();
};

//Nurse class
//Inherits Medical class
class Nurse : public Medical
{
protected:
	string nurseId;

public:
	Nurse(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
				long int _salary, string _degree, string _specialisation, string _nurseId, long _hospitalId);
	void getInfo();
};

#endif