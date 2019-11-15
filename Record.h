#include <string>
#include <iostream>
using namespace std;

#ifndef RECORD_H
#define RECORD_H

#include "Hospital.h"

class Record
{
protected:
	long int recordId, hospitalId;
	string disease, startDate, status;

public:
	static int numberOfRecords;
	Record(string _disease, string _startDate, string _status, long _hospitalId);
	void getInfo();
};

#endif