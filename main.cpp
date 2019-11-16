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

                    }
              }
            }
          }
      }
    }while(flag==0);
}