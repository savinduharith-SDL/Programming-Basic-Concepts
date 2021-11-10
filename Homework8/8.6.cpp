/* 6. Write a program to find out the greatest and the smallest among three numbers using 
pointers. */
#include <iostream>
using namespace std;
void compare3(int *x, int *y, int *z);

int main()
{
	int number1, number2, number3;
	cout << "Enter the number 1 : ";
	cin >> number1;
	cout << "\nEnter the number 2 : ";
	cin >> number2;
	cout << "\nEnter the number 3 : ";
	cin >> number3;
	compare3(&number1, &number2, &number3);
}
void compare3(int *x, int *y, int *z)
{
	if(*x > *y)
	{
		if(*x > *z)
		{
			cout << *x << " is largest.\n";
			if(*y > *z)
			{
				cout << *z <<" is smallest.\n";
			}
			else
			{
				cout << *y << " is smallest.\n";
			}
		}
		else
		{
			cout << *z << " is largest.\n";
			cout << *y <<" is smallest.\n";
		}
		
	}
	else if(*y > *z)
	{
		cout << *y << " is largest.\n";
		if(*x > *z)
		{
			cout << *z <<" is smallest.\n";
		}
		else
		{
			cout << *x <<" is smallest.\n";
		}
	}
	else
	{
		cout << *z << " is largest.\n";
		cout << *x <<" is smallest.\n";
	}
}
