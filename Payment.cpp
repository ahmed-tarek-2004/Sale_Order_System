#include "Payment.h"
#include<iostream>
#include<string>
using namespace std;
double Payment::pay(double t)
{
	cout << "Enter Amount Of Order : ";
	cin >> amount;
	cout << "Enter The Quantity : ";
	cin >> quantity;
	cout << "Enter The Salary : ";
	cin >> Salary;
	//cout << O->get_total() << endl;
	cout << "You Paid " << Salary << " .EGP " << "\t || \t" << "Rest : " << t-Salary<< " .EGP\n";
	return Salary;
}
void Payment::display()
{
	cout << "-------------------------------------------------------------------------------------------------------------\n";
	cout << "\n\n\tThe Amount Of Order IS " << amount << " || " << "The Quantity IS " << quantity << endl
		<< "\tThe Paid Salary IS " << Salary << "\n";
}