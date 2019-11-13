#include<iostream>
using namespace std;

#include "Hospital.h"
#include "Patient.h"
#include "Person.h"
#include "Staff.h"
#include "Record.h"
#include "Admin.h"

int main(){
    // Doctor doctor1("Dr. ABC", "Address1", "98765", "7-8-1989", "Aadhar1", "10-10-2015", 1000000, 
    //     "MBBS", "Neurology", "DOC-1", nullptr);
    // doctor1.getInfo();
    // Patient patient1("Patient 1", "Address P1", "1234", "7-8-2000", "Aadhar P1");
    // doctor1.addRecord(patient1, "Brain Cancer", "10-11-2018", "Ongoing", nullptr);
    // patient1.showRecords();
    // Admin admin;
    // admin.createHospital("Apollo", "Gwalior", "9876787654");
    // cout<<"I'm back"<<endl;
    // admin.registerDoctor("ABC", "Address", "9812391342","08-09-1991", "12345", "10-03-2015",10000000, "MBBS", "Neurology", nullptr);
    // Manegerial manager("Manager", "123 Street", "9876", "09-08-1991", "1234", "09-10-2007", 20000,"MBA","Accounts",nullptr);
    // manager.registerPatient("Patient1", "1-7-388", "81726", "07-08-2000", "7998");
    // Doctor doctor("Doc", "A", "A", "A", "A", "A", 1, "A", "A", nullptr);
    // doctor.addRecord(2, "Dengue", "07-08-2000", "Ongoing", 1);
    Patient patient("Patient1", "1-7-388", "81726", "07-08-2000", "7998");
    patient.showRecords(3);
    // cout<<"Returned to main"<<endl;
}