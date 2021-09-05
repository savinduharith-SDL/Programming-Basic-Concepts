#include<iostream>
#include<math.h>

using namespace std;

double DistanceCalculator(double x1, double y1, double x2, double y2) {
	double x_temp, y_temp, out;

	x_temp = x1 - x2;
	x_temp = pow(x_temp, 2);

	y_temp = y1 - y2;
	y_temp = pow(y_temp, 2);

	out = sqrt((x_temp + y_temp));
	return out;
}


int main(){
	double x1,x2,y1,y2,distance ;
	
	cout << "Enter the X1 : " ;
	cin >> x1 ;
	cout << "Enter the Y1 : " ;
	cin >> y1 ;	
	cout << "\n" ; 
	cout << "Enter the X2 : " ;
	cin >> x2 ;
	cout << "Enter the Y2 : " ;
	cin >> y2 ;	
	distance = DistanceCalculator (x1,y1,x2,y2);

	cout << "The distance is : " << distance << endl ; 
	
	return 0;	
}

