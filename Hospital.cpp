#include <iostream>
using namespace std;

#include "Hospital.h"

Hospital::Hospital(string _name, string _location, string _contact){
    name = _name;
    location = _location;
    contact = _contact;	
}

//Getting details of a Hospital
void Hospital::getInfo(){
	cout<<"Name of Hospital: "<< name <<endl;
	cout<<"Address of Hospital: "<<location<<endl;
	cout<<"Contact Number: "<<contact<<endl;
}