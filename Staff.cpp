#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

#include "Staff.h"
#include "Patient.h"
#include "Record.h"

int Staff::numberOfStaff = 0;

//staff constructor
Staff::Staff(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
						 long int _salary, string _degree, Hospital *_hospital = nullptr) : Person(_name, _address, _contact, _dob, _aadhar)
{
	staffId = ++numberOfStaff;
	doj = _doj;
	salary = _salary;
	degree = _degree;
	hospital = _hospital;
}

//Medical constructor
Medical::Medical(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
								 long int _salary, string _degree, string _specialisation, Hospital *_hospital = nullptr) : Staff(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _hospital)
{
	specialisation = _specialisation;
}

//Manegerial constructor
Manegerial::Manegerial(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
											 long int _salary, string _degree, string _job, Hospital *_hospital = nullptr) : Staff(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _hospital)
{
	job = _job;
}

void Manegerial::registerPatient(string _name, string _address, string _contact, string _dob, string _aadhar)
{
	fstream file;
	string line;
	file.open("Patients.txt", ios::app | ios::in);
	while (!file.eof())
	{
		getline(file, line);
		if (line[0] == 'A' && line[1] == 'a')
		{
			if (!_aadhar.compare(line.substr(8)))
			{
				cout << "Patient already exists!" << endl;
				return;
			}
		}
	}
	file.close();
	Patient patient(_name, _address, _contact, _dob, _aadhar);
	patient.Write();
}

//Doctor constructor
Doctor::Doctor(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
							 long int _salary, string _degree, string _specialisation, Hospital *_hospital = nullptr) : Medical(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _specialisation, _hospital)
{
}

void Doctor::addRecord(long _patientId, string _disease, string _startDate, string _status, long _hospitalId)
{
	fstream file;
	string line;
	long flag = 0;
	file.open("Hospitals.txt", ios::app | ios::in);
	while (!file.eof())
	{
		getline(file, line);
		if (line[0] == 'I' && stoi(line.substr(3)) == _hospitalId)
		{
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
		cout << "Invalid Hospital ID" << endl;
		return;
	}
	flag = 0;
	file.close();
	file.open("Patients.txt", ios::app | ios::in);
	fstream tempFile;
	tempFile.open("temp.txt", ios::app | ios::in);
	while (!file.eof())
	{
		getline(file, line);
		if (line[0] == 'P' && stoi(line.substr(4)) == _patientId)
		{
			tempFile << line << endl;
			flag = 1;
			Record record(_disease, _startDate, _status, _hospitalId);
			getline(file, line);
			long counter = 0;
			while (line[0] != 'P')
			{
				if (line[0] == 'R')
					counter++;
				tempFile << line << endl;
				if (file.eof())
					break;
				getline(file, line);
			}
			tempFile << "RID: " << counter << endl;
			tempFile << "Disease: " << _disease << endl;
			tempFile << "Start: " << _startDate << endl;
			tempFile << "Status: " << _status << endl;
			tempFile << "HospitalID: " << _hospitalId << endl;
			tempFile << line << endl;
		}
		else
		{
			tempFile << line << endl;
		}
	}
	file.close();
	tempFile.close();
	remove("Patients.txt");
	rename("temp.txt", "Patients.txt");

	// Record record(_disease, _startDate, _status, _hospital);
	// patient.addRecord(record);
}

void Doctor::Write()
{
	fstream file;
	string line;
	long temp = 0;
	file.open("Doctors.txt", ios::app | ios::in);
	while (!file.eof())
	{
		getline(file, line);
		if (line[0] == 'R')
			temp = stoi(line.substr(4));
	}
	file.close();
	registrationNumber = temp + 1;
	file.open("Doctors.txt", ios::app | ios::in);
	file << "RNO: " << registrationNumber << endl;
	file << "Name: " << name << endl;
	file << "Address: " << address << endl;
	file << "Contact: " << contact << endl;
	file << "DOB: " << dob << endl;
	file << "Aadhaar: " << aadhaar << endl;
	file << "DOJ: " << doj << endl;
	file << "Salary: " << salary << endl;
	file << "Degree: " << degree << endl;
	file << "Specialization: " << specialisation << endl;
	if (hospital)
	{
		cout << "M";
		file << "HOSPITAL DETAILS" << endl;
		(*hospital).Write("Doctors.txt");
	}
	// cout<<"Before close"<<endl;
	file.close();
}

//Getting details of a Doctor
void Doctor::getInfo()
{
	cout << "Staff ID of the Doctor: " << staffId << endl;
	cout << "Registration Number of Doctor: " << registrationNumber << endl;
	cout << "Name of Doctor: " << name << endl;
	cout << "Address of Doctor: " << address << endl;
	cout << "Contact Number: " << contact << endl;
	cout << "Date of Birth: " << dob << endl;
	cout << "Aadhaar Number: " << aadhaar << endl;
	cout << "Date of Joining: " << doj << endl;
	cout << "Salary: " << salary << endl;
	cout << "Degree: " << degree << endl;
	cout << "Specialisation: " << specialisation << endl;
	if (hospital)
	{
		cout << "---HOSPITAL---" << endl;
		hospital->getInfo();
	}
	cout << endl;
}

//Nurse constructor
Nurse::Nurse(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
						 long int _salary, string _degree, string _specialisation, string _nurseId, Hospital *_hospital = nullptr) : Medical(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _specialisation, _hospital)
{
	nurseId = _nurseId;
}

//Getting details of a Nurse
void Nurse::getInfo()
{
	cout << "Staff ID of the Nurse: " << staffId << endl;
	cout << "Registration ID of Nurse: " << nurseId << endl;
	cout << "Name of Nurse: " << name << endl;
	cout << "Address of Nurse: " << address << endl;
	cout << "Contact Number: " << contact << endl;
	cout << "Date of Birth: " << dob << endl;
	cout << "Aadhaar Number: " << aadhaar << endl;
	cout << "Date of Joining: " << doj << endl;
	cout << "Salary: " << salary << endl;
	cout << "Degree: " << degree << endl;
	cout << "Specialisation: " << specialisation << endl;
	cout << "---HOSPITAL---" << endl;
	hospital->getInfo();
}