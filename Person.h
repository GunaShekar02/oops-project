#include <string>
using namespace std;

//Person class
//This is the main class
class Person{
protected:
	string name, address, contact, dob, aadhaar;
public:
	Person(string _name, string _address, string _contact, string _dob, string _aadhar);
};
