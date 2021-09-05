# include <iostream>

int main() {
	
	using namespace std;
	
	int countg ;
	int N , count ;
	double tp1 , tp2 ;
	
	getcount:
	cout << "Enter the number of numbers  ";
	cin  >>  N ;

	if(N <0 ){
		cout<< "Please enter a valid number" << endl ;
			goto getcount ;
	}	
	
	tp1 = 0;
	count = 1;
	countg = 0 ;
	
	while (count < N+1 ){
		cout << "Enter the Number " << count << " : " << endl ;
		cin >> tp2 ;
		if (tp2 > 10) {
		tp1 = tp1 + tp2 ;
		countg ++ ;
		}
		count ++ ;
	}
	cout << "The average of numbers greater than 10 is : " << tp1/countg << endl ;
	
}
