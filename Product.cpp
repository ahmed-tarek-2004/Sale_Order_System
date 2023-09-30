#include "Product.h"
#include<iostream>
#include<string>
using namespace std;
Product::Product()
{
	id = type = 0;//int 
	price = 0;//double 
	name = number = "";//string
	quantity=0;
}
void Product::Update()
{
	cout << "Enter Proudct's Name : ";
	cin.get();
	getline(cin, name);
	cout << "Enter Product's ID : ";
	cin >> id;
	cout << "Enter Product's Serial Number : ";
	cin >> number;
	cout << "Enter Product's Type : ";
	cin >> type;
	cout << "Enter Product's Price's Buy : ";
	cin >> price;
	cout << "Enter Quntity : ";
	cin >> quantity;
	fixedQ = quantity;
	cout << endl;
}
int Product::getID()
{
	return id;
}
int Product::getQuantity()
{
	return quantity;
}
void Product::UpdateQuantity(double Q)
{
	if (fixedQ != quantity)
	{
		quantity = fixedQ;
	}
	quantity =fixedQ - Q;
}
double Product::getPrice()
{
	return price;
}
string Product::getname()
{
	return name;
}
istream& operator>>(istream& in, Product& pro)
{
	//string name;
	cout << "Enter Proudct's Name : ";
	cin.get();
	getline(cin, pro.name);
	cout << "Enter Product's ID : ";
	in >> pro.id;
	cout << "Enter Product's Serial Number : ";
	in >> pro.number;
	cout << "Enter Product's Type : ";
	in >> pro.type;
	cout << "Enter Product's Price's Buy : ";
	in >> pro.price;
	cout << "Enter Product's Quantity : ";
	in >> pro.quantity;
	pro.fixedQ = pro.quantity;
	cout << endl;
	return in;
}
ostream& operator<<(ostream& out, Product& pro)
{
	out << "\t\tThe Proudct Name IS : " << pro.name << endl
		<< "\t\tThe Product Serial Number IS : " << pro.number << endl
		<< "\t\tThe Product ID IS : " << pro.id << endl
		<< "\t\tThe Product Type IS : " << pro.type << endl
		<< "\t\tThe Product Price IS : " << pro.price << endl
		<< "\t\tThe Product Quantity IS : " << pro.quantity << endl;
	return out;
}
