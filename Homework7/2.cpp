//Savindu Harith - IM/2019/025 - Question No 2
#include<iostream>
using namespace std;
bool seatsCompleted1 = false;
bool seatsCompleted2 = false;
int main()
{
	int seatChecker(int arr[10] ,int seatType);
	int people[10] = {0,0,0,0,0,0,0,0,0,0};
	
	while(!seatsCompleted1 || !seatsCompleted2)
	{
	int currentReserve;
	cout<< "Please type 1 for first class and 2 for second class : ";
	cin >> currentReserve;
	seatChecker(people ,currentReserve);
	if(seatsCompleted1 && currentReserve == 1)
	{
		cout << "acceptable to be placed in the economy section ?\nYes / No: ";
		string yesOrNo;
		cin >> yesOrNo;
		if(yesOrNo == "Yes")
		{
			seatChecker(people ,2);
		}
		else if(yesOrNo == "No")
		{
			cout <<"Next flight leaves in 3 hours.\n" ;

		}
		else
		{
			cout<< "Please enter a valid input";
		}
		
	}
	}	
	
}
int seatChecker(int arr[10] ,int seatType)
{
	if(seatType == 1)
	{
		for(int i=0; i<5; i++)
		{
			if(arr[i] == 0)
			{
				arr[i] = 1;
				cout<< "Seat type 1(first class) reserved. Seat no: " <<i+1 <<"\n";
				break;
			}	
		}
		if(arr[4] == 1)
		{
			seatsCompleted1 = true;
			cout << "First class seats  are completed.\n";
		}		
	}
	
	else if(seatType == 2)
	{
		for(int i=5; i<10; i++)
		{
			if(arr[i] == 0)
			{
				arr[i] = 1;
				cout<< "Seat type 2(economy) reserved. Seat no: " <<i+1 <<"\n";
				break;
			}	
		}
		if(arr[9] == 1)
		{
			seatsCompleted2 = true;
			cout << "Economy seats  are completed.\n";
		}		
	}	
}
