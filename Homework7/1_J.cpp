//Savindu Harith - IM/2019/025 - Question No 1.j
#include<iostream>
using namespace std;
int main()
{
	//Question 1.J
int t[2][5] = {{2,3,5,4,5},{5,-5,-7,2,2}};
int temp = 0;
for(int i=0; i<2;i++)
{
	for(int j=0; j<5; j++)
	{
		if(temp == 0)
		{
			temp = t[i][j];
		}
		else if (temp > t[i][j])
		{
			temp = t[i][j];
			
		}
	}
}
	cout <<temp;
}
/*

*/
