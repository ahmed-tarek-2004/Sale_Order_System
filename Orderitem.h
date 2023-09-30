#ifndef ORDERITEM_H
#define ORDERITEM_H
#include"Product.h"
#include<string>
using namespace std;
class Orderitem
{
	int id;
	double saleprice;
	double quantity;
	string Proname;
public:
	Orderitem();
	Orderitem operator++();
	Orderitem operator--();
	Orderitem operator++(int);
	Orderitem operator--(int);
	Orderitem operator+=(int);
	Orderitem operator-=(int);
	void set(Product *,int );
	void updatequantity(double quantity,Product*,int);
	double getquantity();
	string getname();
	void dispalay();
	double getsale();
	friend ostream& operator<<(ostream&, Orderitem&);
};
#endif