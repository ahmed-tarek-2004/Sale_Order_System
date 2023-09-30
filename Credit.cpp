#include "Credit.h"
#include<iostream>
using namespace std;
Credit::Credit()
{
	number = "";
	expire = "";
}
double Credit::pay(double t)
{
	cout << "Enter Number Of Credit Card : ";
	cin >> number;
	cout << "Enter Expire Date Of Credit Card : ";
	cin >> expire;
	return Payment::pay(t);
}
void Credit::display()
{
	Payment::display();
	cout << "\tCredit Card Number IS : " << number << endl
		<< "\tCredit Card Expire Date IS : " << expire << endl;
	cout << "-------------------------------------------------------------------------------------------------------------\n";
}