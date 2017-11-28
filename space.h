#include <string>
#include <iostream>

using namespace std;

class Space 
{
protected:
	const string name;
public:
	virtual void do_action() { cout << "ERROR: called do_action() on space";};
	const string get_name() const { return name;};
};
