/*11. Write a program to count the number of vowels and consonants in a string using a 
pointer */
#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	int i = 0;
	int vowels = 0;
	int consonants = 0;
	cout << "Enter the size of the array that you want to enter : ";
	cin >> n;
	char arr[n];
	fflush(stdin);
	cout << "Enter the text : ";
	cin.getline(arr,n);
	while(arr[i] != NULL)
	{
		if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
		{
			vowels ++;
			i++;
		}
		else if(((int)arr[i] < 123 && (int)arr[i] > 64 ) || ((int)arr[i] < 91 && (int)arr[i] > 96))
		{
			consonants++;
			i++;
		}
	}
	cout << "Vowels : " << vowels << "\nConsonants : " << consonants;
}
