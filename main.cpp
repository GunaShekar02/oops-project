#include <bits/stdc++.h>
using namespace std;

#include "Hospital.h"
#include "Patient.h"
#include "Person.h"
#include "Staff.h"
#include "Record.h"
#include "Admin.h"

int main()
{
  int flag=1;
  do{
    flag=1;
    int choice;
    cout<<"Who are you?"<<endl;
    cout<<"1. Administrator"<<endl;
    cout<<"2. Managerial Staff"<<endl;
    cout<<"3. Doctor"<<endl;
    cout<<"4. Patient"<<endl;
    cin>>choice;
    switch(choice){
      case 1: 
          {
            Admin admin("123456");
            string password;
            cout<<"Enter Password"<<endl;
            cin>>password;
            if(password.compare(admin.getPassword())!=0){
              flag=0;
              cout << "\x1b[2J\x1b[1;1H" << flush;
              cout<<"Wrong Password.\nTaking you back to the Menu."<<endl;
            }
            else{
            int choice;
            cout<<"1. Create Hospital"<<endl;
            cout<<"2. Register a Doctor"<<endl;
            cout<<"3. Get count of entered disease"<<endl;
            cout<<"4. Register a Managerial Staff"<<endl;
            cout<<"5. Go back to menu"<<endl;
            cin>>choice;
            switch(choice){
                case 1: 
                    {
                      string name,location,contact;
                      cin.ignore();
                      cout<<"Enter Name of the Hospital: "<<endl;
                      getline(cin,name);
                      cout<<"Enter location of the Hospital: "<<endl;
                      getline(cin,location);
                      cout<<"Enter Contact Number: "<<endl;
                      cin>>contact;
                      admin.createHospital(name,location,contact);
                    }
                    break;
                case 2:
                    {
                      string name,address,contact,dob,aadhar,doj,degree,specialisation;
                      long int salary,hospitalId;
                      cin.ignore();
                      cout<<"Name: "<<endl;
                      getline(cin,name);
                      cout<<"Address: "<<endl;
                      getline(cin,address);
                      cout<<"Contact Number: "<<endl;
                      cin>>contact;
                      cout<<"Date of Birth: "<<endl;
                      cin>>dob;
                      cout<<"Adhaar Number: "<<endl;
                      cin>>aadhar;
                      cout<<"Hospital ID: "<<endl;
                      cin>>hospitalId;
                      cout<<"Date of Joining: "<<endl;
                      cin>>doj;
                      cout<<"Degree: "<<endl;
                      cin>>degree;
                      cout<<"Specialisation: "<<endl;
                      cin>>specialisation;
                      cout<<"Salary: "<<endl;
                      cin>>salary;
                      admin.registerDoctor(name,address,contact,dob,aadhar,doj,salary,degree,specialisation,hospitalId);
                    }
                    break;
                case 3:
                    {
                      string disease;
                      cout<<"Enter disease name: "<<endl;
                      cin>>disease;
                      cout<<admin.getCountOfDisease(disease)<<endl;
                    }
                    break;
                case 4:
                    {
                      string name,address,contact,dob,aadhar,doj,degree,job;
                      long int salary,hospitalId;
                      cin.ignore();
                      cout<<"Name: "<<endl;
                      getline(cin,name);
                      cout<<"Address: "<<endl;
                      getline(cin,address);
                      cout<<"Contact Number: "<<endl;
                      cin>>contact;
                      cout<<"Date of Birth: "<<endl;
                      cin>>dob;
                      cout<<"Adhaar Number: "<<endl;
                      cin>>aadhar;
                      cout<<"Hospital ID: "<<endl;
                      cin>>hospitalId;
                      cout<<"Date of Joining: "<<endl;
                      cin>>doj;
                      cout<<"Degree: "<<endl;
                      cin>>degree;
                      cout<<"Job: "<<endl;
                      cin>>job;
                      cout<<"Salary: "<<endl;
                      cin>>salary;
                      admin.createManager(name,address,contact,dob,aadhar,doj,salary,degree,job,hospitalId);
                    }
                    break;
                case 5:
                    {
                      flag=0;
                      cout << "\x1b[2J\x1b[1;1H" << flush;
                      cout<<"Menu--->"<<endl;
                    }
                    break;
                default:
                    flag=0;
                    cout << "\x1b[2J\x1b[1;1H" << flush;
                    cout<<"Wrong Input."<<endl;
                    cout<<"For security purpose, we are taking you to the menu."<<endl;
                    cout<<"Menu--->"<<endl;
              }

            }
          }
          break;
        case 2: 
            {

              string password;
              cout<<"Enter Password: "<<endl;
              cin>>password;
              if(password.compare("123456")!=0){
                flag=0;
                cout << "\x1b[2J\x1b[1;1H" << flush;
                cout<<"Wrong Password.\nTaking you back to the Menu."<<endl;
              }
              else{
                Manegerial manager;
                int choice;
                cout<<"1. Register Patients."<<endl;
                cout<<"2. Go back to the menu. "<<endl;
                cin>>choice;
                switch(choice){
                  case 1:
                    {
                      string name,address,contact,dob,aadhar;
                      cout<<"Name: "<<endl;
                      cin>>name;
                      cout<<"Address: "<<endl;
                      cin>>address;
                      cout<<"Contact Number: "<<endl;
                      cin>>contact;
                      cout<<"Date of Birth: "<<endl;
                      cin>>dob;
                      cout<<"Adhaar Number: "<<endl;
                      cin>>aadhar;
                      manager.registerPatient(name,address,contact,dob,aadhar);
                    }
                    break;
                  case 2:
                    {
                      flag=0;
                      cout << "\x1b[2J\x1b[1;1H" << flush;
                      cout<<"Menu--->"<<endl;
                    }
                    break;
                  default:
                      flag=0;
                      cout << "\x1b[2J\x1b[1;1H" << flush;
                      cout<<"Wrong Input."<<endl;
                      cout<<"For security purpose, we are taking you to the menu."<<endl;
                      cout<<"Menu--->"<<endl;
                      break;

                }
              }
            }
            break;
          case 3:
            {
              string password;
              cout<<"Enter Password: "<<endl;
              cin>>password;
              if(password.compare("123456")!=0){
                flag=0;
                cout << "\x1b[2J\x1b[1;1H" << flush;
                cout<<"Wrong Password.\nTaking you back to the Menu."<<endl;
              }
              else{
                Doctor doctor;
                int choice;
                cout<<"1. Add Records"<<endl;
                cout<<"2. Go back to the menu. "<<endl;
                cin>>choice;
                switch(choice){
                  case 1:
                    {
                      string disease,startdate,status;
                      long int hospitalId,patientid;
                      cout<<"Patient ID: "<<endl;
                      cin>>patientid;
                      cout<<"Disease: "<<endl;
                      cin>>disease;
                      cout<<"Start Date: "<<endl;
                      cin>>startdate;
                      cout<<"Current Status: "<<endl;
                      cin>>status;
                      cout<<"Hospital ID: "<<endl;
                      cin>>hospitalId;
                      doctor.addRecord(patientid,disease,startdate,status,hospitalId);
                    }
                    break;
                  case 2:
                    {
                      flag=0;
                      cout << "\x1b[2J\x1b[1;1H" << flush;
                      cout<<"Menu--->"<<endl;
                    }
                    break;
                  default:
                      flag=0;
                      cout << "\x1b[2J\x1b[1;1H" << flush;
                      cout<<"Wrong Input."<<endl;
                      cout<<"For security purpose, we are taking you to the menu."<<endl;
                      cout<<"Menu--->"<<endl;
                      break;
                }
            } 
          }
          break;
          case 4:
              {
                Doctor doctor;
                int choice;
                cout<<"1. See Records"<<endl;
                cout<<"2. Go back to the menu. "<<endl;
                cin>>choice;
                switch(choice){
                  case 1:
                    {
                      int id;
                      Patient patient;
                      cout<<"Enter Your ID: "<<endl;
                      cin>>id;
                      patient.showRecords(id);
                    }
                    break;
                  case 2:
                    {
                      flag=0;
                      cout << "\x1b[2J\x1b[1;1H" << flush;
                      cout<<"Menu--->"<<endl;
                    }
                    break;
                  default:
                      flag=0;
                      cout << "\x1b[2J\x1b[1;1H" << flush;
                      cout<<"Wrong Input."<<endl;
                      cout<<"For security purpose, we are taking you to the menu."<<endl;
                      cout<<"Menu--->"<<endl;
                      break;
                }
            } 
          break;
      }

    }while(flag==0);
}