#include "Orderitem.h"
#include <iostream>
#include "Product.h"
using namespace std;
Orderitem::Orderitem()
{
	saleprice = 0;
	quantity = 0;
	Proname = "";
}
void Orderitem::set(Product *P,int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << "[" << i + 1 << "]" << "-" << P[i].getname() << endl;
	}
	cout << "Enter Your Choice : ";
	cin >> id;
	Proname = P[id - 1].getname();
	do
	{
		cout << "Enter The Quantity : ";
		cin >> quantity;
		if (quantity > P[id - 1].getQuantity())
		{
			cout << "The Quantity IS Over !!!\n"
				<< "Enter A New Quantity : \n";
			cin >> quantity;
		}
	}while (quantity > P[id - 1].getQuantity());
	P[id - 1].UpdateQuantity(quantity);
	//cout << "Quantity In Stock IS : " << P->getQuantity() << endl;
	cout << "Enter Sale Price : ";
	cin >> saleprice;
}
void Orderitem::dispalay()
{
	cout << "You Orderd " << Proname << "\n"
		<< "Quantity is : " << getquantity() << "\n"
		<< "the Price is " << saleprice * getquantity() << " EGP\n";
}
double Orderitem::getquantity()
{
	return quantity;
}
double Orderitem::getsale()
{
	return saleprice * getquantity();
}
string Orderitem::getname()
{
	return Proname;
}
void Orderitem::updatequantity(double quantity ,Product*p,int id)
{
	this->quantity = quantity;
	p[id - 1].UpdateQuantity(quantity);
}
Orderitem Orderitem::operator++()
{
	quantity++;
	return *this;
}
Orderitem Orderitem::operator++(int)
{
	Orderitem order=*this;
	quantity++;
	return order;
}
Orderitem Orderitem::operator--()
{
	quantity--;
	return *this;
}
Orderitem Orderitem::operator--(int)
{
	Orderitem order = *this;
	quantity--;
	return order;
}
ostream& operator<<(ostream& out, Orderitem& i)
{
	out << "You Orderd " << i.Proname << "\n"
		<< "Quantity is : " << i.getquantity() << "\n"
		<< "the Price is " << i.saleprice * i.getquantity()<<" EGP\n";
	return out;
}