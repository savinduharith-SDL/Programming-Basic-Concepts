//7. Write a program to find the factorial of a number using pointers
#include <iostream>
using namespace std;
int factorial(int *num);
int main()
{
	int number = 10;
	cout << factorial(&number);
}
int factorial(int *num)
{
	if(*num == 1)
	{
		return 1;
	}
	else
	{
		*num -= 1;
		return((*num+1) * (factorial(num)));
	}
}
