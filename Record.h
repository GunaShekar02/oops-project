#include <string>
using namespace std;

// class Hospital{
// protected:
// 	string Name,Location,contact;
// public:
// 	Hospital(string name,string l,string c);
// 	void getinfo();	
// };

// Hospital::Hospital(string name,string l,string c){
// 		Name=name;
// 		Location=l;
// 		contact=c;
		
// }
// //Getting details of a Hospital
// void Hospital::getinfo(){
// 	cout<<"Name of Hospital: "<< Name<<endl;
// 	cout<<"Address of Hospital: "<<Location<<endl;
// 	cout<<"Contact Number: "<<contact<<endl;
	
// }

#include "hospital.h"
#include "person.h"

class Record{
protected:
	long int id;
	string disease,StartDate,Status;
	Hospital *hospital;
	Doctor *doctor;
public:
	Record(long int i,string d,string sd,string s,Hospital *h,Doctor *dd);
	void getinfo();	
};

Record::Record(long int i,string d,string sd,string s,Hospital *h, Doctor *dd){
		disease=d;
		Status=sd;
		StartDate=s;
		id=i;
		hospital=h;
		doctor=dd;
		
}
//Getting details of a Record
void Record::getinfo(){
	cout<<"Record Id: "<< id<<endl;
	cout<<"Disease: "<<disease<<endl;
	cout<<"Starting date: "<<StartDate<<endl;
	cout<<"Status: "<<Status<<endl;
	cout<<"----Doctor---"<<endl;
	doctor->getinfo();
	cout<<"----Hospital---"<<endl;
	hospital->getinfo();
	
}
