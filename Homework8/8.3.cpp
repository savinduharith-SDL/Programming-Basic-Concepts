/* Write a program to print the value of the address of the pointer to a variable whose 
value is input from user. */
#include<iostream>
using namespace std;
int main()
{
	int tempVar;
	int *tempPtr;
	tempPtr = &tempVar;
	cout << "Enter the number : ";
	cin >> *tempPtr;
	cout<< "\nValue of the adress of pointer : " << *tempPtr;
	
}
