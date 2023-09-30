#ifndef CREDIT_H
#define CREDIT_H
#include "Payment.h"
class Credit :public Payment
{
	string number;
	string expire;
	string type;
public:
	double pay(double);
	void display();
	Credit();
};
#endif