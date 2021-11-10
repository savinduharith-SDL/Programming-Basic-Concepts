//12. Write a program in C to sort an array using Pointer 
#include<iostream>
using namespace std;
void swapArr(int *arr, int elements);
int main()
{
	int arr[] = {8,6,3,2,1,4,5,6,8,4,5,6,3,2,0,2,1,5,7,8,9,5};
	swapArr(arr, 22);
}
void swapArr(int *arr, int elements)
{
	for(int i = 0; i< elements ; i++)
	{
		for(int j = 0; j< (elements-1); j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0; i< elements; i++)
	{
		cout << "\t" << arr[i];
	}
}
