#include <iostream>

using namespace std;

void SmallestCommonFactorGenerator(){
	
	int n1,n2,scfactor;
	
	cout << "Enter two numbers: "<<endl;
	cin >> n1 >> n2 ;

	if(n1>n2){
		int temp;
		temp=n1;
		n1=n2;
		n2=temp; 
	}
	
	scfactor=n2 ;    

	bool condition=true;

	while(condition){
		
		if(scfactor%n2==0 && scfactor%n1==0){ 
			cout << "Smallest common factor of "<<n1<<" and "<<n2<<" is: "<<scfactor<<endl;		
			condition=false;
			
		}
		scfactor++; 
		
	}
		
}


int main() {
	
	SmallestCommonFactorGenerator(); 
	return 0;
}

