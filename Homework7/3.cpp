//Savindu Harith - IM/2019/025 - Question No 3
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char s[100];
	cout << "Enter the text (Only first 100 characters will accepted by the system): \n";
	cin.getline(s,100);
	cout <<"\nUpper: \n";
	for(int i=0;i<100;i++)
	{
		char current = toupper(s[i]);
		cout << current;
	}
	cout <<"\nLower: \n";
	for(int i=0;i<100;i++)
	{
		char current = tolower(s[i]);
		cout << current;
	}
}

