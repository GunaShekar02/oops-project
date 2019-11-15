#include <iostream>
using namespace std;

#include "Record.h"

int Record::numberOfRecords = 0;

Record::Record(string _disease, string _startDate, string _status, long _hospitalId)
{
  disease = _disease;
  startDate = _startDate;
  status = _status;
  hospitalId = _hospitalId;
}

void Record::getInfo()
{
  cout << "Record ID: " << recordId << endl;
  cout << "Disease : " << disease << endl;
  cout << "Start Date : " << startDate << endl;
  cout << "Status : " << status << endl;
  cout << "Hospital ID: " << hospitalId << endl;
  cout << endl;
}