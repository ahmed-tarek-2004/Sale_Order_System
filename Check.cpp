#include "Check.h"
#include<iostream>
using namespace std;
Check::Check()
{
	name = "";
	bankid = "";
}
double Check::pay(double t)
{
	cout << "Enter Name Of Check Owner : ";
	cin >> name;
	cout << "Enter Name Of Bank ID : ";
	cin >> bankid;
	return Payment::pay(t);
}
void Check::display()
{
	Payment::display();
	cout << "\tCheck Name IS : " << name << endl
		<< "\tBank ID IS : " << bankid<<endl;
	cout << "-------------------------------------------------------------------------------------------------------------\n";
}