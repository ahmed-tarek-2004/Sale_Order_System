#ifndef TRANSACTIONS
#define TRANSACTIONS
#include "Order.h"
#include "Payment.h"
#include<string>
using namespace std;
class Transactions
{
	int n;
	char date[26];
	Payment **pay;
public:
	double getorder(double);
	void display();
	Transactions();
	~Transactions();
};
#endif