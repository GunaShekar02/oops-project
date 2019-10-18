#include <iostream>
using namespace std;

#include "patient.h"

//Person contructor
Person::Person(string name,string add, string cont, string d, string a){
		Name=name;
		Address=add;
		contact=cont;
		dob=d;
		Aadhaar=a;
}

//Patient constructor
Patient::Patient(string name,string add, string cont, string d, string a, long int pId, Record &r) :
Person(name,add, cont, d, a),record(r){
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
	record.getinfo();
}

//staff constructor
Staff::
Staff(string name,string add, string cont, string d, string a, long int sId,string date,long int sal, string deg,Hospital *h) :
Person(name,add, cont, d, a){
	staffId=sId;
	DOJ=date;
	salary=sal;
	degree=deg;
	hospital=h;
}

//Medical constructor
Medical::
Medical(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string spec,Hospital *h) :
Staff(name,add, cont, d, a,sId,date,sal,deg,h){

	specialisation=spec;
}
	
//Manegerial constructor
Manegerial::
Manegerial(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string j,Hospital *h) :
Staff(name,add, cont, d, a,sId,date,sal,deg,h){
	
	job=j;
}

//Doctor constructor
Doctor::
Doctor(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string spec,string reg,Hospital *h) :
Medical(name,add, cont, d, a,sId,date,sal,deg,spec,h){

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
	cout<<"Specialisation: "<<specialisation<<endl;
	hospital->getinfo();
}

//Nurse constructor
Nurse::
Nurse(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string spec,string nid,Hospital *h) :
Medical(name,add, cont, d, a,sId,date,sal,deg,spec,h){

	nurseId=nid;
}

//Getting details of a Nurse
void Nurse::getinfo(){
	cout<<"Staff ID of the Nurse: "<<staffId<<endl;
	cout<<"Registration ID of Nurse: "<<nurseId<<endl;
	cout<<"Name of Nurse: "<< Name<<endl;
	cout<<"Address of Nurse: "<<Address<<endl;
	cout<<"Contact Number: "<<contact<<endl;
	cout<<"Date of Birth: "<<dob<<endl;
	cout<<"Aadhaar Number: "<<Aadhaar<<endl;
	cout<<"Date of Joining: "<<DOJ<<endl;
	cout<<"Salary: "<<salary<<endl;
	cout<<"Degree: "<<degree<<endl;
	cout<<"Specialisation: "<<specialisation<<endl;
	hospital->getinfo();
}

int main(){
	Hospital *h=new Hospital("aas","asd","qwerty");
	Doctor *dd=new Doctor("sss","asd","asqss","12213","dwdwd",12345,"wsdf",1234,"asdf","asdf","sdf",h);

	Record r(1233,"asas","asas","213132",h,dd);

	Nurse p("sss","asd","asqss","12213","dwdwd",12345,"wsdf",1234,"asdf","asdf","sdf",h);

	p.getinfo();
}