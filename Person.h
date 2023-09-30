#ifndef PERSON_H
#define PERSON_H
#include "Customer.h"
#include <string>
using namespace std;
class Person:public Customer
{
	string adress;
	string name;
public:
	Person();
	string print();
	string getname();
	void out();
	void set();
};
#endif
