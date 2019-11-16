#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

#include "Patient.h"
#include "Record.h"

int Patient::numberOfPatients = 0;

Patient::Patient(){
	
}

//Patient constructor
Patient::Patient(string _name, string _address, string _contact, string _dob, string _aadhar) : Person(_name, _address, _contact, _dob, _aadhar)
{
	patientId = ++numberOfPatients;
}

//Getting details of a Patient
void Patient::getInfo()
{
	cout << "Patient ID: " << patientId << endl;
	cout << "Name of Patient: " << name << endl;
	cout << "Address of Patient: " << address << endl;
	cout << "Contact Number: " << contact << endl;
	cout << "Date of Birth: " << dob << endl;
	cout << "Aadhaar Number: " << aadhaar << endl;
}

void Patient::showRecords(int id)
{
	fstream file;
	string line;
	file.open("Patients.txt", ios::app | ios::in);
	while (!file.eof())
	{
		getline(file, line);
		if (line[0] == 'P' && stoi(line.substr(4)) == id)
		{
			while (line[0] != 'R')
				getline(file, line);
			break;
		}
	}
	getline(file, line);
	while (!file.eof())
	{
		cout << line << endl;
		getline(file, line);
		if (line[0] == 'P')
			break;
	}
}

void Patient::Write()
{
	fstream file;
	string line;
	long temp = 0;
	file.open("Patients.txt", ios::app | ios::in);
	while (!file.eof())
	{
		getline(file, line);
		if (line[0] == 'P')
			temp = stoi(line.substr(4));
	}
	file.close();
	patientId = temp + 1;
	file.open("Patients.txt", ios::app | ios::in);
	file << "PID: " << patientId << endl;
	file << "Name: " << name << endl;
	file << "Address: " << address << endl;
	file << "Contact: " << contact << endl;
	file << "DOB: " << dob << endl;
	file << "Aadhar: " << aadhaar << endl;
	file << "RECORDS" << endl;
	file.close();
	cout<<"The Patient's ID is "<<patientId<<endl;
}
