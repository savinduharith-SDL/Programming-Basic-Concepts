#include <iostream>

using namespace std;

int main() {
	
	int N , count ;
	
	count = 0;

	getcount:
	cout << "Enter the number of numbers to enter : " ;
	cin >> N ;

	if(N<3){
		cout << "Enter valid number of inputs" << endl ;
		goto getcount ;
	}
	
	double nums[N] ;
	
	while (count < N){
		cout << "Enter the number " << count+1 <<" : ";
		cin >> nums[count] ;
		count++ ;
	}
	
	
	for (int i = 0;i < N; i++ ){
		
		for (int j = i+1;j<N;j++){
			
			if(nums[i]>nums[j]){
				
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
	
	cout << "The third smallest number is : " << nums[2] << endl ;  
	
	return 0;		
	
		
	}



