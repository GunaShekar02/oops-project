#include "Person.h"
#include "Hospital.h"

//Staff class
//Need to create association with hospital
class Staff : public Person{
    static int numberOfStaff;
protected:
	int staffId;
	string doj;
	long int salary;
	string degree;
	Hospital *hospital;
public:
	Staff(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree,Hospital *_hospital = nullptr);
};

//Medical class
class Medical : public Staff{
protected:
	string specialisation;
public:
	Medical(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _specialisation, Hospital *_hospital = nullptr);
};

//Manegerial class
class Manegerial : public Staff{
protected:
	string job;
public:
	Manegerial(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _job, Hospital *_hospital = nullptr);
};


//Doctor class
//Inherits Medical class
class Doctor : public Medical{
protected:	
	string registrationNumber;
public:
	Doctor(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _specialisation, string _registrationNumber, Hospital *_hospital = nullptr);
	void getInfo();
};

//Nurse class
//Inherits Medical class
class Nurse : public Medical{
protected:
	string nurseId;
public:
	Nurse(string _name, string _address, string _contact, string _dob, string _aadhar, string _doj,
        long int _salary,string _degree, string _specialisation, string _nurseId, Hospital *_hospital = nullptr);
	void getInfo();
};