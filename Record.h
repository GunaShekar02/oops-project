#include <string>
#include<iostream>
using namespace std;

#include "Hospital.h"
#include "Staff.h"

class Record{
	static int numberOfRecords;
protected:
	long int id;
	string disease, startDate, status;
	Hospital *hospital;
	Doctor *doctor;
public:
	Record(string _disease, string _startDate, string _status, Doctor *_doctor, Hospital *_hospital = nullptr);
	void getInfo();	
};
