//Write a program to print the address of a variable whose value is input from user. 
#include<iostream>
using namespace std;
int main()
{
	int tempVar;
	cout << "Enter a number: ";
	cin >> tempVar;
	cout << "\nAdress of that number : " << &tempVar;
}
