#ifndef	CHECK_H
#define CHECK_H
#include "Payment.h"
class Check :public Payment
{
private :
	string name;
	string bankid;
public:
	Check();
	double pay(double);
	void display();
};
#endif