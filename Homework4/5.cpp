#include<iostream>

using namespace std;

void CDCalculator(){

	int n1, n2, i, grcd ;

	cout << "Enter two numbers: "<< endl;
	cin >> n1 >> n2;

	for(i=1 ; i <= n1 && i <= n2  ; ++i){

		if(n1%i==0 & n2%i==0){
				grcd = i ;
		}
}
	cout << "Greatest Common Devisor : " << grcd << endl;
}

int main(){
	
	CDCalculator(); 
	return 0 ;
	
}
