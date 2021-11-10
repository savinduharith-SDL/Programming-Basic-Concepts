// Write a program to print a number which is entered from keyboard using pointer
#include <iostream>
using namespace std;
int main()
{
	int number;
	int *ptr;
	ptr = &number;
	cout<< "Enter the number : ";
	cin >> number;
	cout << "Number = " << *ptr;
}
