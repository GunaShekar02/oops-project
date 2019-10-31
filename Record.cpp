#include <iostream>
using namespace std;

#include "Record.h"

Record::Record(string _disease, string _startDate, string _status, Doctor *_doctor, Hospital *_hospital = nullptr){
    disease = _disease;
    startDate = _startDate;
    status = _status;
    doctor = _doctor;
    hospital = _hospital;
}

void Record::getInfo(){
    cout<<"Disease : "<<disease<<endl;
    cout<<"Start Date : "<<startDate<<endl;
    cout<<"Status : "<<status<<endl;
    cout<<"----DOCTOR----"<<endl;
    doctor->getInfo();
    cout<<"----HOSPITAL----"<<endl;
    hospital->getInfo();
}