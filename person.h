#include <string>

using namespace std;



//Person class
//This is the main class
class Person{
protected:
	string Name,Address,contact,dob,Aadhaar;
	
public:
	Person(string name,string add, string cont, string d, string a);
};




//Staff class
//Need to create association with hospital
class Staff : public Person{
protected:
	long int staffId;
	string DOJ;
	long int salary;
	string degree;
	Hospital *hospital;

public:
	Staff(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,Hospital *h);
};

//Medical class
class Medical : public Staff{
protected:
	
	string specialisation;
	
public:
	Medical(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string spec,Hospital *h);
};

//Manegerial class
class Manegerial : public Staff{
protected:
	
	string job;
	
public:
	Manegerial(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string j,Hospital *h);
};


//Doctor class
//Inherits Medical class
class Doctor : public Medical{
protected:
	
	string registrationNumber;
	
public:
	Doctor(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string spec,string reg,Hospital *h);
	void getinfo();
};

//Nurse class
//Inherits Medical class
class Nurse : public Medical{
protected:
	
	string nurseId;
	
public:
	Nurse(string name,string add, string cont, string d, string a, long int sId,string date,long int sal,string deg,string spec,string nid,Hospital *h);
	void getinfo();
};



