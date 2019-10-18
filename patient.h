#include <string>

using namespace std;

#include "Record.h"

//Patient class
class Patient : public Person{
protected:
	long int patientId;
	Record record;
public:
	Patient(string name,string add, string cont, string d, string a, long int pId, Record &);
	void getinfo();
};