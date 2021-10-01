//Savindu Harith - IM/2019/025 - Question No 1.i
#include<iostream>
using namespace std;
int main()
{
	int t[2][5] = {{2,3,5,4,5},{5,-5,-7,9,2}};
	int temp;
	for(int i=0; i<2;i++)
	{
	for(int j=0; j<5; j++)
	{
		cout << "Enter value : " << i+1 << "." << j+1 << " : ";
		cin >> temp;
		t[i][j] = temp;
	}
	}

}

