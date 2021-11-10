//8. Write a program to reverse the digits a number using pointers. 
#include<iostream>
using namespace std;
void reverseFunc(int *num, int *rev,int numberofNums);
int main()
{
	int number = 120600;
	int reversed = 0;
	reverseFunc(&number,&reversed,6);	
	cout << reversed;
}
void reverseFunc(int *num, int *rev,int numberofNums)
{
	int remainder = 0;
	int increment = 1;
	for(int i =0; i<numberofNums; i++)
	{
		increment *= 10;
	}
	cout << "Increment : " << increment << "\n";
	while(*num/ 10 > 0)
	{
		remainder = *num % 10;
		*num = *num / 10;
		increment /= 10; 
		*rev += remainder * increment;	
	}
	if(*num/ 10 == 0)
	{
		*rev += *num;
	}
	
}
