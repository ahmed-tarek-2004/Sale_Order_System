#include "Customer.h"
#include <iostream>
using namespace std;
Customer::Customer()
{
	id = counter=0;
	Total = 0;
	phone = "";
	order = new Order;
}
string Customer::print()
{
	cout << *order;
	return "The ID is : " + to_string(id) + "\n"
		+ "The Phone is : " + phone + "\n";
}
void Customer::out()
{
	cout << print();
}
void Customer::set()
{
	cout << "Enter Custumor ID : ";
	cin >> id;
	cout << "Enter Customer Phone : ";
	cin >> phone;
	//cin >> order[counter++];
}
void Customer::updateO(double q, Product *P)
{
	order->updatO(q, P);
}
void Customer::updates()
{
	order->editO();
}
void Customer::setorders(Order o)
{
	*order = o;
}
void Customer::setorder(Product *p,int counter)
{
	order->creatorder(p,counter);
}
int Customer::cusid()
{
	return id;
}
istream& operator >>(istream& in, Customer& cus)
{
	cout << "Enter Custumor ID : ";
	in >> cus.id;
	cout << "Enter Customer Phone : ";
	in >> cus.phone;
	return in;
}
ostream& operator<<(ostream& out, Customer& cus)
{
	out << "The ID is : " << cus.id << endl
		<< "The Phone is : " << cus.phone << endl;
	return out;
}
Customer::~Customer()
{
	delete order;
}