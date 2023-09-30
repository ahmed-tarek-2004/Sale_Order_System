#include "Customers.h"
#include "Customer.h"
#include "Company.h"
#include "Person.h"
#include "Order.h"
#include<iostream>
using namespace std;
Customers::Customers()
{
	count = 0;
	size = 50;
	cus = new Customer * [size];
}
void Customers::addcustomers()
{
	int index = 0;
	do
	{
		cout << "[1]-Person\n"
			 << "[2]-Company\n"
			 << "Enter Your Choice : ";
		cin >> index;
	} while (index <= 0 || index>2);
	switch(index)
	{
	case 1:
		cus[count] = new Person();
		cus[count++]->set();
		break;
	case 2:
		cus[count] = new Company();
		cus[count++]->set();
		break;
	}
}
void Customers::updates(int id)
{
	cus[id - 1]->updates();
}
Order Customers::getorder(int i)
{
	return cus[i-1]->getorder();
}
void Customers::setorders(Product *p,int counter)
{
	cout << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "[" << i + 1 << "]-" << cus[i]->getname()<<"\n";
	}
	//cout << count << endl;
	cout << "Enter Customer ID : ";
	int id;
	cin >> id;
	cus[id - 1]->setorder(p,counter);
}
void Customers::assign(int idc,Product* p,int counter)
{
	if (cus[idc - 1]->cusid() == idc)
	{
		//cout << "Will\n";
		//Order* n = new Order;
		//*n = *o;
		cus[idc - 1]->setorder(p,counter);
		//delete n;
	}
	else
		cout << "NO\n";
}
void Customers::Edit(int id,Product *p,int counter)
{
	cout << "[1]-Edit Customer Data \n"
		<< "[2]-Edit Customer Order\n"
		<< "Enter Your Choice : ";
	int c;
	cin >> c;
	switch (c)
	{
	case 1:
	for (int i = 0; i < count; i++)
	{
		if (cus[i]->cusid() == id)
		{
			cus[i]->set();
		}
		break;
	}
	break;
	case 2:
		cus[id - 1]->setorder(p, counter);
		break;
	}
}
void Customers::Delete()
{
	cout << "Enter ID To Delete : ";
	int id;
	cin >> id;
	for (int i = 0; i < count; i++)
	{
		if (id == cus[i]->cusid())
		{
			swap(cus[i], cus[count - 1]);
			count--;
			break;
		}
	}
}
void Customers::updato(double q, Product* P,int i)
{
	cus[i-1]->updateO(q, P);
}
void Customers::print()
{
	for (int i = 0; i < count; i++)
	{
		cus[i]->out();
	}
}
void Customers::printcus(int id)
{
	cus[id]->out();
}
Customers::~Customers()
{
	for (int i = 0; i < size; i++)
		delete cus[i];
	delete[]cus;
}