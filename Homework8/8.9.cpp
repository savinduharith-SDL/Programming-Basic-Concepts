//9. Write a program to store n elements in an array and print the elements using pointer
#include<iostream>
using namespace std;
void printArr(int *arr, int n);
int main()
{
//	int n = 0;
//	cout << "Enter the number of elements : ";
//	cin >> n;
//	int arrNum[n];
//	printArr(arrNum, n);

}
 void printArr(int *arr, int n)
 {
 	for(int i=0;i< n; i++)
 	{
 		cout << "Enter the element " << i+1 << " :";
		cin >> arr[i];
		cout << "\n";	
	}
	cout << "The elements you enterd are : \n";
	for(int i=0;i< n; i++)
 	{
 		cout << "Element No. " << i+1 << " :";
		cout << arr[i] << "\n";	
	}
 }
