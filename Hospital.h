#include <string>
using namespace std;

class Hospital{
protected:
	string name, location, contact;
public:
	Hospital(string _name, string _location, string _contact);
	void getInfo();	
};
