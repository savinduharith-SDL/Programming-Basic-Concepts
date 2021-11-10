//10. Write a program to Calculate the length of the string using a pointer 
#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	int i = 0;
	int characters = 0;
	cout << "Enter the size of the array that you want to enter : ";
	cin >> n;
	char arr[n];
	fflush(stdin);
	cout << "Enter the text : ";
	cin.getline(arr,n);
	while(arr[i] != NULL)
	{
		characters ++;
		i++;
	}
	cout << "No of characters : " << characters;
}
