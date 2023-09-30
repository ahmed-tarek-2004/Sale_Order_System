#include "Company.h"
#include "Customer.h"
#include<iostream>
using namespace std;
string Company::print()
{
	return "Company Name IS : " + ComName+"\n"
		+ "Company Location IS : " + location+"\n"+Customer::print()+"\n";
}
void Company::out()
{
	cout << print();
}
void Company::set()
{
	Customer::set();
	cout << "Enter Company Name : ";
	cin >> ComName;
	cout << "Enter Location Name : ";
	cin >> location;
}
string Company::getname()
{
	return ComName;
}