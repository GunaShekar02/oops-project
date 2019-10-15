#include <string>

using namespace std;

class Person{
protected:
	string Name,Address,contact,dob,Aadhaar;
public:
	Person(string name,string add, string cont, string d, string a);	
};

class Patient: public Person{
protected:
	long int patientId;
	string allergies[10];
public:
	Patient* getinfo();	
};

