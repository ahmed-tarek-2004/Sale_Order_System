#ifndef PAYMENT_H
#define PAYMENT_H
#include "Order.h"
#include<string>
using namespace std;
class Payment
{
	string date;
	double quantity;
	double Salary;
	double amount;
public:
   virtual double pay(double);     // In Uml 
	///virtual void update();  // In Uml 
	virtual void display();
};
#endif