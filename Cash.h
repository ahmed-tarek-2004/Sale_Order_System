#ifndef CASH_H
#define CASH_H
#include "Payment.h"
class Cash:public Payment
{
private:
public:
	double pay(double);
	void display();
};
#endif
