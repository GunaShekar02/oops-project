#include <string>
using namespace std;

class Record{
protected:
	long int id;
	string disease,StartDate,Status
public:
	Record(long int i,string d,string sd,string s);
	void getinfo();	
}

Record::Record(long int i,string d,string sd,string s){
		disease=d;
		Status=sd;
		StartDate=s;
		id=i;
		
}
//Getting details of a Record
void Record::getinfo(){
	cout<<"Record Id: "<< id<<endl;
	cout<<"Disease: "<<disease<<endl;
	cout<<"Starting date: "<<StartDate<<endl;
	cout<<"Status: "<<Status<<endl;
	
}
