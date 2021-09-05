# include <iostream>

int main() {
	
	using namespace std;
	
	int N , count ;
	double tp1 , tp2 ;
	
	getcount:
	cout << "Enter the number of numbers?  ";
	cin  >>  N ;
	if(N <0 ){
		cout<< "Please enter a valid number!" << endl ;
			goto getcount ;
	}
	
	tp1 = 0;
	count = 1;
	
	while (count < N+1 ){
		cout << "Enter the Number " << count << " : " << endl ;
		cin >> tp2 ;
		tp1 = tp1 + tp2 ;
		count ++ ;
	}
	
	cout << "The average is : " << tp1/N << endl ;
	
}
