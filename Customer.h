#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Order.h"
#include "Orderitem.h"
#include<iostream>
#include<string>
using namespace std;
class Customer
{
protected:
	virtual string print();
private:
	int id;
	string phone;
	Order* order;
	int counter;
	double Total;
public:
	Customer();
	virtual void out();
	friend istream& operator>>(istream& in, Customer& cus);
	friend ostream& operator<<(ostream& out, Customer& cus);
	virtual void set();
	int cusid();
	Order getorder() { return *order; }
	void setorder(Product *,int);
	virtual string getname() = 0;
	void updates();
	void setorders(Order);
	void updateO(double q, Product* P);
	void printorder();
	void settottal(double id)
	{
		//if (id < 0)
			Total = order->get_total();
		//else
			Total -= id;
	}
	double gettotal()
	{
		return Total;
	}
	~Customer();
};
#endif
