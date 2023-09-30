#ifndef CUSTOMERS_H
#define CUSTOMERS_H
#include "Customers.h"
#include "Customer.h"
#include "Person.h"
#include "Order.h"
#include "Company.h"
class Customers
{
	int count;
	int size;
	Customer **cus;
public:
	Customers();
	~Customers();
	void addcustomers();
	void Edit(int,Product*,int);
	void Delete();
	void print();
	void printcus(int);
	void assign(int id,Product* ,int );
	void setorders(Product*,int);
	//void assign2(Order,int );
	void updato(double, Product*,int);
	void updates(int id);
	Order getorder(int);
	double gettotal(int i) { return cus[i - 1]->gettotal(); }
	void settotal(int id, double t) { cus[id - 1]->settottal(t); }
};
#endif