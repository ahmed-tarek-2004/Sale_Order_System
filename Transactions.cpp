#include "Transactions.h"
#include "Credit.h"
#include "Cash.h"
#include "Check.h"
Transactions::Transactions()
{
	 n = 0;
	 pay = new Payment*[10];
}
double Transactions::getorder(double to)
{
	cout << "\n\n\tEnter Pay Way \n"
		<< "[1]-Credit \n"
		<< "[2]-Check\n"
		<< "[3]-Cash\n"
		<< "Enter Your Choice : ";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		pay[n] = new Credit();
		break;
	case 2:
		pay[n] = new Check();
		break;
	default://already Pay Cash In Payment with Variable Salary
		pay[n] = new Cash();
		break;
	}
	//n++;
	time_t t = time(0);
	ctime_s(date, sizeof date, &t);
	return pay[n++]->pay(to);
}
void Transactions::display()
{
	for (int i = 0; i < n; i++)
	{
		pay[i]->display();
	}
	cout << "\t" << "Date : " << date << endl<<endl;
}
Transactions::~Transactions()
{
	for (int i = 0; i < n; i++)
	{
		delete pay[i];
	}
	delete[]pay;
}