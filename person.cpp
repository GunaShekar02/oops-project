#include <iostream>
using namespace std;

#include "person.h"

//Person contructor
Person::Person(string name,string add, string cont, string d, string a){
		Name=name;
		Address=add;
		contact=cont;
		dob=d;
		Aadhaar=a;
}

//Patient constructor
Patient::Patient(string name,string add, string cont, string d, string a, long int pId) :
Person(name,add, cont, d, a){
	patientId=pId;
	
}

//Getting details of a Patient
void Patient::getinfo(){
	cout<<"Patient ID: "<<patientId<<endl;
	cout<<"Name of Patient: "<< Name<<endl;
	cout<<"Address of Patient: "<<Address<<endl;
	cout<<"Contact Number: "<<contact<<endl;
	cout<<"Date of Birth: "<<dob<<endl;
	cout<<"Aadhaar Number: "<<Aadhaar<<endl;
}

//staff constructor
Staff::
Staff(string name,string add, string cont, string d, string a, long int sId,string date,long int sal, string deg) :
Person(name,add, cont, d, a){
	staffId=sId;
	DOJ=date;
	salary=sal;
	degree=deg;
}

//Medical constructor
Medical::
Medical(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string spec) :
Staff(name,add, cont, d, a,sId,date,sal,deg){

	specialisation=spec;
}
	
//Manegerial constructor
Manegerial::
Manegerial(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string j) :
Staff(name,add, cont, d, a,sId,date,sal,deg){
	
	job=j;
}

//Doctor constructor
Doctor::
Doctor(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string spec,string reg) :
Medical(name,add, cont, d, a,sId,date,sal,deg,spec){

	registrationNumber=reg;
}

//Getting details of a Doctor
void Doctor::getinfo(){
	cout<<"Staff ID of the Doctor: "<<staffId<<endl;
	cout<<"Registration Number of Doctor: "<<registrationNumber<<endl;
	cout<<"Name of Doctor: "<< Name<<endl;
	cout<<"Address of Doctor: "<<Address<<endl;
	cout<<"Contact Number: "<<contact<<endl;
	cout<<"Date of Birth: "<<dob<<endl;
	cout<<"Aadhaar Number: "<<Aadhaar<<endl;
	cout<<"Date of Joining: "<<DOJ<<endl;
	cout<<"Salary: "<<salary<<endl;
	cout<<"Degree: "<<degree<<endl;
	cout<<"Specialisation: "<<spec<<endl;
}

//Nurse constructor
Nurse::
Nurse(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string spec,string nid) :
Medical(name,add, cont, d, a,sId,date,sal,deg,spec){

	nurseId=nid;
}

//Getting details of a Nurse
void Nurse::getinfo(){
	cout<<"Staff ID of the Nurse: "<<staffId<<endl;
	cout<<"Registration ID of Nurse: "<<nid<<endl;
	cout<<"Name of Nurse: "<< Name<<endl;
	cout<<"Address of Nurse: "<<Address<<endl;
	cout<<"Contact Number: "<<contact<<endl;
	cout<<"Date of Birth: "<<dob<<endl;
	cout<<"Aadhaar Number: "<<Aadhaar<<endl;
	cout<<"Date of Joining: "<<DOJ<<endl;
	cout<<"Salary: "<<salary<<endl;
	cout<<"Degree: "<<degree<<endl;
	cout<<"Specialisation: "<<spec<<endl;
}



int main(){
	Patient p("Aditi","aaaa","aaaa","aaaa","aaaa",12333);
}