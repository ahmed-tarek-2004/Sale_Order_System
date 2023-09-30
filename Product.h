#ifndef PRODUCT_H
#define PRODUCT_H
#include<string>
#include<iostream>
using namespace std;
class Product
{
	int id;
	int type;
	string name;
	string number;
	double price;
	double quantity;
	double fixedQ;
public:
	Product();
	void Update();
	void UpdateQuantity(double Q);
	int getID();
	int getQuantity();
	double getPrice();
	string getname();
	friend istream& operator>>(istream& in, Product& pro);
	friend ostream& operator<<(ostream& out, Product& pro);
};
#endif
