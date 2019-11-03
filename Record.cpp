#include <iostream>
using namespace std;

#include "Record.h"

int Record::numberOfRecords = 0;

Record::Record(string _disease, string _startDate, string _status, Hospital *_hospital = nullptr){
    id = ++numberOfRecords;
    disease = _disease;
    startDate = _startDate;
    status = _status;
    // doctor = _doctor;
    hospital = _hospital;
}

void Record::getInfo(){
    cout<<"Record ID: "<<id<<endl;
    cout<<"Disease : "<<disease<<endl;
    cout<<"Start Date : "<<startDate<<endl;
    cout<<"Status : "<<status<<endl;
    if(hospital){
        cout<<"----HOSPITAL----"<<endl;
        hospital->getInfo();
    }
    cout<<endl;
}