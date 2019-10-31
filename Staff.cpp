#include <iostream>
using namespace std;

#include "Patient.h"

//staff constructor
Staff::Staff(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree,Hospital *_hospital = nullptr) :
Person(_name, _address, _contact, _dob, _aadhar){
	staffId = ++numberOfStaff;
	doj = _doj;
	salary = _salary;
	degree = _degree;
	hospital = _hospital;
}

//Medical constructor
Medical::Medical(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _specialisation, Hospital *_hospital = nullptr) :
Staff(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _hospital){
	specialisation = _specialisation;
}
	
//Manegerial constructor
Manegerial::Manegerial(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _job, Hospital *_hospital = nullptr) :
Staff(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _hospital){	
	job = _job;
}

//Doctor constructor
Doctor::Doctor(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _specialisation, string _registrationNumber, Hospital *_hospital = nullptr) :
Medical(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _specialisation, _hospital){
	registrationNumber = _registrationNumber;
}

//Getting details of a Doctor
void Doctor::getInfo(){
	cout<<"Staff ID of the Doctor: "<<staffId<<endl;
	cout<<"Registration Number of Doctor: "<<registrationNumber<<endl;
	cout<<"Name of Doctor: "<< name <<endl;
	cout<<"Address of Doctor: "<<address<<endl;
	cout<<"Contact Number: "<<contact<<endl;
	cout<<"Date of Birth: "<<dob<<endl;
	cout<<"Aadhaar Number: "<<aadhaar<<endl;
	cout<<"Date of Joining: "<<doj<<endl;
	cout<<"Salary: "<<salary<<endl;
	cout<<"Degree: "<<degree<<endl;
	cout<<"Specialisation: "<<specialisation<<endl;
    cout<<"---HOSPITAL---"<<endl;
	hospital->getInfo();
}

//Nurse constructor
Nurse::Nurse(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _specialisation, string _nurseId, Hospital *_hospital = nullptr) :
Medical(_name, _address, _contact, _dob, _aadhar, _doj, _salary, _degree, _specialisation, _hospital){
	nurseId = _nurseId;
}

//Getting details of a Nurse
void Nurse::getInfo(){
	cout<<"Staff ID of the Nurse: "<<staffId<<endl;
	cout<<"Registration ID of Nurse: "<<nurseId<<endl;
	cout<<"Name of Nurse: "<< name <<endl;
	cout<<"Address of Nurse: "<<address<<endl;
	cout<<"Contact Number: "<<contact<<endl;
	cout<<"Date of Birth: "<<dob<<endl;
	cout<<"Aadhaar Number: "<<aadhaar<<endl;
	cout<<"Date of Joining: "<<doj<<endl;
	cout<<"Salary: "<<salary<<endl;
	cout<<"Degree: "<<degree<<endl;
	cout<<"Specialisation: "<<specialisation<<endl;
    cout<<"---HOSPITAL---"<<endl;
	hospital->getInfo();
}