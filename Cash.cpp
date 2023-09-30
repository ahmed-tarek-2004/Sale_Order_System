#include "Payment.h"
#include "Order.h"
#include "Cash.h"
#include<iostream>
using namespace std;
double Cash::pay(double t)
{
	return Payment::pay(t);
}
void Cash::display()
{
	Payment::display();
	cout << "-------------------------------------------------------------------------------------------------------------\n";
}