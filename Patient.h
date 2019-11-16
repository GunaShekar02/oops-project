#include <string>
#include <vector>
using namespace std;

#ifndef _PATIENT_H
#define _PATIENT_H

#include "Record.h"
#include "Person.h"

//Patient class
class Patient : public Person
{
protected:
	int patientId;
	vector<Record> records;

public:
	static int numberOfPatients;
	Patient();
	Patient(string _name, string _address, string _contact, string _dob, string _aadhar);
	void getInfo();
	void showRecords(int id);
	void Write();
};

#endif