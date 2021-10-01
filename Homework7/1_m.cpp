//Savindu Harith - IM/2019/025 - Question No 1.m
#include<iostream>
using namespace std;
int main()
{
	for(int p=1; p<6;p++)
				{
					if(p==1)
					{
						cout<< "   ";
					}
					cout << p <<"  ";
				}
				cout <<"\n";
	int t[2][5] = {{2,3,5,4,5},{5,5,7,2,2}};
	for(int i=0; i<2; i++)
	{
		cout << i+1 <<" |";
		for(int j=0; j<5; j++)
		{
			if(i==0)
			{
				
			}
			cout << t[i][j] <<"  "; 
		}
		cout << "\n";
	}
}
