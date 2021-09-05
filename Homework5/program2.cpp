#include<iostream>
using namespace std;

// declaring the function
int tseccon (int hour,int minu,int sec) ;

int main (){
	
	int h1,h2,m1,m2,s1,s2,ts1,ts2,difference,PositiveDif;

	
	cout << "Time 1\n";	
	gethour1:		
	cout << "Enter the hour (0 - 12) :" ;
	cin >> h1 ;
	if (h1 < 0){
		cout << "Hour must be a positive value! \n" ;
		goto gethour1 ;
	}	
	if (h1 > 12){
		cout << "Hour must be less than or equal to 12! \n" ;
		goto gethour1 ;
	}	
	
	getminu1:		
	cout << "Enter the minute (0 - 59) : " ;
	cin >> m1 ;
	if (m1 < 0){
		cout << "Minute must be a positive value! \n" ;
		goto getminu1 ;
	}	
	if (m1 > 59){
		cout << "Minute must be less than or equal to 59! \n" ;
		goto getminu1 ;
	}
	
	getsec1:		
	cout << "Enter the second (0 - 59) : " ;
	cin >> s1 ;
	if (s1 < 0){
		cout << "Second must be a positive value! \n" ;
		goto getsec1 ;
	}	
	if (s1 > 59){
		cout << "Second must be less than or equal to 59! \n" ;
		goto getsec1 ;
	}	
	

	cout << "Time 2\n";	
		
	gethour2:		
	cout << "Enter the hour (0 - 12) : " ;
	cin >> h2 ;
	if (h2 < 0){
		cout << "Hour must be a positive value! \n" ;
		goto gethour2 ;
	}	
	if (h2 > 12){
		cout << "Hour must be less than or equal to 12! \n" ;
		goto gethour2 ;
	}	
	
	getminu2:		
	cout << "Enter the minute (0 - 59) : " ;
	cin >> m2 ;
	if (m2 < 0){
		cout << "Minute must be a positive value! \n" ;
		goto getminu2 ;
	}	
	if (m2 > 59){
		cout << "Minute must be less than or equal to 59! \n" ;
		goto getminu2 ;
	}
	
	getsec2:		
	cout << "Enter the second (0 - 59) : " ;
	cin >> s2 ;
	if (s2 < 0){
		cout << "Second must be a positive value! \n" ;
		goto getsec2 ;
	}	
	if (s2 > 59){
		cout << "Second must be less than or equal to 59! \n" ;
		goto getsec2 ;
	}
	
	ts1 = tseccon (h1,m1,s1) ;
	ts2 = tseccon (h2,m2,s2) ;
	difference = ts1 - ts2;
	if (difference < 0){
		PositiveDif = -1 * difference ;
	}
	else{
		PositiveDif = difference;
	}

	cout << "The time difference is : " << PositiveDif <<" Seconds. " << endl ;

	
}

int tseccon (int hour,int minu,int sec){
	int hoursec,minusec,tsec ;
	hoursec=hour*3600;	
	minusec=minu*60;
	tsec=hoursec+minusec+sec;
	return tsec;
}




