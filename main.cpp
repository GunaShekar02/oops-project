#include<iostream>
using namespace std;

#include "Hospital.h"
#include "Patient.h"
#include "Person.h"
#include "Staff.h"
#include "Record.h"

int main(){
    Doctor doctor1("Dr. ABC", "Address1", "98765", "7-8-1989", "Aadhar1", "10-10-2015", 1000000, 
        "MBBS", "Neurology", "DOC-1", nullptr);
    doctor1.getInfo();
    Patient patient1("Patient 1", "Address P1", "1234", "7-8-2000", "Aadhar P1");
    doctor1.addRecord(patient1, "Brain Cancer", "10-11-2018", "Ongoing", nullptr);
    patient1.showRecords();
}