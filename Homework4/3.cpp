#include <iostream>
using namespace std;

int main() {
	
	int N , count ;
	double num,min,max;
	
	
	getcount:
	cout << "Enter the number of numbers to compare : " ;
	cin >> N ;

	if(N <0 ){
		cout<< "Please enter a valid number" << endl ;
			goto getcount ;
	} 
	
	
	if (N == 0){
		return 0;  
	}
	
	count = 1;
	
	cout << "Enter the number 1 : " << endl ;
	cin >> num ;	
	min = num;
	max = num;
	
	while (count < N){
		cout << "Enter the number " << count+1 << " : " << endl ;
		cin >>  num ;
		if (num > max ){
			max = num ;
		} 
		if (num < min ){
			min = num;
		}
		
		count ++ ;	
		
	}
	cout << "The largest number is : " << max << endl;
	cout << "The smallest number is : " << min << endl;
	
	return 0;
	
}



