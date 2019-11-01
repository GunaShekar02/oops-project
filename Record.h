#include <string>
#include<iostream>
using namespace std;

#ifndef RECORD_H
#define RECORD_H

#include "Hospital.h"

class Record{
protected:
	long int id;
	string disease, startDate, status;
	Hospital *hospital;
	// Doctor *doctor;
public:
	static int numberOfRecords;
	Record(string _disease, string _startDate, string _status, Hospital *_hospital);
	void getInfo();	
};

#endif