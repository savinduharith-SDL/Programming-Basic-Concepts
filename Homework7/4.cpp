//Savindu Harith - IM/2019/025 - Question No 4
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char leftArray[100];
	char rightArray[100];
	cout<< "Enter the first String: \n";
	cin.getline(leftArray,100);
	cout<< "Enter the second String: \n";
	cin.getline(rightArray,100);
	int resultCode = strcmp(leftArray, rightArray);
	if(resultCode == 0)
	{
		cout<< "Strings are equal";
	}
	else if(resultCode < 0)
	{
		cout << "First string is less than the second string";
	}
	else
	{
		cout << "First string is greater than the second string";
	}
}
