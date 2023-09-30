#ifndef ORDER_H
#define ORDER_H
#include<iostream>
#include<time.h>
#include"Orderitem.h"
#include"Product.h"
using namespace std;
enum{New,Hold,Paid,Canseled};
class Order
{
	int statue;
	int n;
	int Orderid;
	int Onumber;
	char date[26];
	double total;
	Orderitem* O;
public:
	Order();
	void creatorder(Product*,int);
	void updatO(double,Product*);
	void editO();
	void printorder();
	friend ostream &operator<<(ostream &out, Order& ord);
	friend istream &operator>>(istream &in, Order& ord);
	void set_total();
	double get_total();
	void update_total(double t) { total -= t; }
	~Order();
};
#endif