/*5. Write a function which will take pointer and display the number on screen. Take number 
from user and print it on screen using that function. */
#include<iostream>
using namespace std;
void displayNum(int *value);

int main()
{
	int number;
	cout << "Enter the number : ";
	cin >> number;
	displayNum(&number); 
}
void displayNum(int *value)
{
	cout << "\nThe number is : " << *value;
}
