/* Write a program to print the address of the pointer to a variable whose value is input 
from user. */
#include <iostream>
using namespace std;
int main()
{
	int tempVar;
	int *tempPtr;
	tempPtr = &tempVar;
	cout << "Enter the value : ";
	cin >> *tempPtr;
	cout << "Value in the variable : " << tempVar << "\nLocation of pointer : " << &tempPtr; 
}
