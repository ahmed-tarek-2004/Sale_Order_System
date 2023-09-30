#include "Stock.h"
#include "Product.h"
#include<iostream>
#include<string>
using namespace std;
Stock::Stock()
{
	size=50;
	id = count = 0;
	pro = new Product[size];
}
void Stock::addstock(Product p)
{
	pro[count++] = p;
}
void Stock::Updatestock(int id)
{
	cin >> pro[id-1];
	//quantityarr[count++] = quantity;
	//count++;
}
void Stock::updatequantity(int idpro,double quantity)
{
	pro[idpro].UpdateQuantity(quantity);
}
void Stock::deletestock(int id)
{
	cout << "Enter Product ID To Delete : ";
	cin >> id;
	for (int i = 0; i < count; i++)
	{
		if (pro[i].getID() == id)
		{
			swap(pro[i], pro[size - 1]);
			//swap(quantityarr[i], quantityarr[size - 1]);
			size--;
			cout << "\n\t\t<# Deleted #>\n";
			count--;
			break;
		}
	}
}
int Stock::getquantity(int id)
{
	cout << "Enter Product ID : ";
	cin >> id;
	return pro[id - 1].getQuantity();
}
istream &operator >>(istream& in, Stock& stock)
{
	/*	for (int i = 0; i < stock.count; i++)
		{
			in >> stock.pro[i];
			//in >> stock.quantityarr[i];
		}*/
	return in;
}
ostream& operator <<(ostream& out, Stock& stock)
{
	//cout << "Count Is " << stock.count << endl;
	for (int i = 0; i < stock.count; i++)
	{
		out << "----------------------------------------------------------------------------\n\n\n";
		out << stock.pro[i]<<"  \n  ";
		out << "-----------------------------------------------------------------------------\n\n\n";
	}
	return out;
}
Stock::~Stock()
{
	delete[]pro;
	//delete[]quantityarr;
}
Product* Stock::profun()
{
	return pro;
}