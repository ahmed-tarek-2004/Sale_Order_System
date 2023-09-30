#include "Person.h"
#include "Customer.h"
#include<iostream>
using namespace std;
Person::Person()
{
	name = "";
	adress = "";
}
string Person::print()
{
	return "The Name IS : " + name + "\n" + "the Adress IS : " + adress + "\n" + Customer::print()+"\n";
}
void Person::out()
{
	cout << print();
}
void Person::set()
{
	Customer::set();
	cout << "Enter Full Name : ";
	cin.get();
	getline(cin, name);
	cout << "Enter Address : ";
	cin >> adress;
}
string Person::getname()
{
	return name;
}