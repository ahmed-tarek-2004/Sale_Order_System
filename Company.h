#ifndef COMPANY_H
#define COMPANY_H
#include<string>
#include "Customer.h"
using namespace std;
class Company:public Customer
{
	string location;
	string ComName;
public:
	string print();
	string getname();
	void set();
	void out();
};
#endif

