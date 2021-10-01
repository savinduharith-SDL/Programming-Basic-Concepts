//Savindu Harith - IM/2019/025 - Question No 1.l
#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int t[2][5] = {{2,3,5,4,5},{5,-5,-7,9,2}};
	for(int i= 0; i<2; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(j == 3)
			{
				sum += t[i][j];
			}
		}
	}
	cout<< "Sum : " << sum;
	return 0;
}
