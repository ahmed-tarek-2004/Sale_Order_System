#ifndef STOCK_H
#define STOCK_H
#include <iostream>
#include<string>
#include "Product.h"
using namespace std;
class Stock
{
	int id, count;
	int size;
	Product* pro;// [50] = {};
public:
	Stock();
	~Stock();
	void addstock(Product);
	void Updatestock(int);
	void deletestock(int);
	int getquantity(int);
	void updatequantity(int,double);
	Product * profun();
	friend istream& operator >>(istream&, Stock&);
	friend ostream& operator <<(ostream&, Stock&);
};
#endif