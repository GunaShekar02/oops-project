#include <string>
using namespace std;

class Hospital{
protected:
	string Name,Location,contact;
public:
	Hospital(string name,string l,string c);
	void getinfo();	
};

Hospital::Hospital(string name,string l,string c){
		Name=name;
		Location=l;
		contact=c;
		
}
//Getting details of a Hospital
void Hospital::getinfo(){
	cout<<"Name of Hospital: "<< Name<<endl;
	cout<<"Address of Hospital: "<<Location<<endl;
	cout<<"Contact Number: "<<contact<<endl;
	
}


