#include <iostream>
using namespace std;

#include "Patient.h"

//Patient constructor
Patient::Patient(string _name, string _address, string _contact, string _dob, string _aadhar) :
Person(_name, _address, _contact, _dob, _aadhar){
	patientId = ++numberOfPatients;	
}

//Getting details of a Patient
void Patient::getinfo(){
	cout<<"Patient ID: "<<patientId<<endl;
	cout<<"Name of Patient: "<< name <<endl;
	cout<<"Address of Patient: "<<address<<endl;
	cout<<"Contact Number: "<<contact<<endl;
	cout<<"Date of Birth: "<<dob<<endl;
	cout<<"Aadhaar Number: "<<aadhaar<<endl;
}