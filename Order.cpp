#include "Order.h"
#include "Orderitem.h"
#include<iostream>
#include<time.h>
#include<string>
using namespace std;
Order::Order()
{
	Orderid = 0;
	Onumber = 0;
	n=1;
	total = 0;
	statue = -1;
	O = new Orderitem[50];
	for (int i = 0; i < 50; i++)
	{
		O[i];
	}
}
void Order::printorder()
{
	cout << "\n\n------------------------------------------\n"
		<< "The Order ID is : " << Orderid << " \n"
		<< "The Order Number Is : " << Onumber << endl
		<< "The Date Is : " << date << endl
		<< "The Oreder Statue Is : ";
	if (statue == New)
	{
		cout << "New\n";
	}
	else if (statue == Hold)
	{
		cout << "Hold\n";
	}
	else if (statue == Paid)
	{
		cout << "Paid\n";
	}
	else if (statue == Canseled)
	{
		cout << "Canseled\n";
	}
	for (int i = 0; i < n; i++)
	{
		O[i].dispalay();
	}
	cout << "\n------------------------------------------\n\n";
}
void Order::creatorder(Product *p,int counter)
{
	cout << "Enter Order ID : ";
	cin >> Orderid;
	//cout << "Enter Order Number : ";
	//cin >> Onumber;
	//Onumber++;
	time_t t = time(0);
    ctime_s(date,sizeof date,&t);
	cout << "How Many Products You Need : ";
	///int n;
	cin >> n;
    for (int i=0;i<n;i++)
	O[i].set(p, counter);
	Onumber += n;
	cout << " Order Statue : \n"
		 << "[0]-New\n[1]-Hold\n[2]-Paid\n[3]-Canseled\nEnter Your Choice : ";
	cin >> statue;
}
void Order::editO()
{
	//O[Orderid - 1].set(p, counter);
	cout << " Order Statue : \n"
		<< "[0]-New\n[1]-Hold\n[2]-Paid\n[3]-Canseled\nEnter Your Choice : ";
	int x;
	cin >> x;
	if (x == 0)
	{
		statue = New;
	}
	else if (x == 1)
	{
		statue = Hold;
	}
	else if (x == 2)
	{
		statue = Paid;
	}
	else
	{
		statue = Canseled;
	}
}
ostream& operator<<(ostream& out, Order& ord)
{

	out << "\n\n------------------------------------------\n"
		<< "The Order ID is : " << ord.Orderid << " \n"
		<< "The Order Number Is : " << ord.Onumber << endl
		<< "The Date Is : " << ord.date << endl
		<< "The Oreder Statue Is : ";
	if (ord.statue==0)
	{
		out << "New\n";
	}
	else if(ord.statue==1)
	{
		cout << "Hold\n";
	}
	else if(ord.statue==2)
	{
		cout << "Paid\n";
	}
	else if(ord.statue==3)
	{
		cout << "Canseled\n";
	}
	for (int i = 0; i < ord.n; i++)
	{
		out << ord.O[i]<<endl;
	}
	out << "\n------------------------------------------\n\n";
	return out;
}
istream& operator>>(istream& in, Order& ord)
{
	return in;
}
void Order::updatO(double q,Product*p)
{
	//O[id - 1].set(Product *P,counter);
	cout << "Enter Product ID : ";
	int id1;
	cin >>id1;
	O[id1 - 1].updatequantity(q,p,id1);
}
void Order::set_total()
{
	total = 0;
	for (int i = 0; i < n; i++)
	{
		total += O[i].getsale();
	}
}
double Order::get_total()
{
	return total;
}
Order::~Order()
{
	delete[] O;
}