#include <string>
#include<vector>
using namespace std;

#include "Record.h"

//Patient class
class Patient : public Person{
	static int numberOfPatients;
protected:
	int patientId;
	vector<Record> records;
public:
	Patient(string _name, string _address, string _contact, string _dob, string _aadhar);
	void getinfo();
};