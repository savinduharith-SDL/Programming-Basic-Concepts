#include<iostream>  


using namespace std;
  

void Fibonacci(int n);
   
int main(){   
    int num; 
    
	getn:  
	cout << "Number of fabonacci numbers \n"  ; 
	cin >> num ;
	   
	if (num < 1){
		cout << "Enter a value equal or greater than 1 \n";
		goto getn;		
	} 
	
	if (num == 1){
		cout << "Fibonacci Series is :  0 " ;
		return 0;
	}
	
	else{	
	cout << "Fibonacci Series is : \n 0 1";
	cout  ;
    Fibonacci(num-2);  
  
    return 0;
	}
 }
 void Fibonacci(int n){    

    static int n1=0,n2=1,n3;  
	  
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
		cout <<" "<< n3 ;  
         Fibonacci(n-1);    
    }    
}  
