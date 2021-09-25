// IM/2019/025
//Savindu Harith
//Vender machine problem - done :)
#include <iostream>
using namespace std;
int countValues(int tens,int fives, int twos, int ones);
int countTens, countFives, countTwos, countOnes, userValue;
int countCoins(int value);
int productPrice;
int ProductNumber;
int balance;
bool canTransactionDone = true;
int passCode = 1234;
int settingProductPrice(int num);
bool notTerminated = true;
int storedTens = 100;
int storedFives = 100;
int storedTwos = 100;
int storedOnes = 100;
int storedAmount = 0;
//resetGlobalValues function is used for resetting the global variables after each transaction.
resetGlobalValues()
{
	countTens = 0; 
	countFives = 0;
	countTwos = 0; 
	countOnes = 0;
	userValue = 0;
	canTransactionDone = true;
	productPrice = 0;
	ProductNumber = 0;
	balance = 0;
	notTerminated = true;
}

//using authorizeTheUser function we can authorize the user and end the process or continue for a another transaction.
authorizeTheUser(int pw)
{
	if(pw == passCode)
	{
		notTerminated = false;
	}
	else
	{
		cout << "Invalid attempt! \n returning back to main screen ...\n";
		resetGlobalValues();
	}
}

int main()
{
	while(notTerminated)
	{
	int tens, fives, twos, ones;
	cout << "Product 1 : Enter 1\n";
	cout << "Product 2 : Enter 2\n";
	cout << "Product 3 : Enter 3\n";
	cout << "Product 4 : Enter 4\n";
	cout << "Enter the product Number : ";
	cin >> ProductNumber;
	// using setting product price method - to assign our item no and price to global variables
	settingProductPrice(ProductNumber);
	// until the user enters the correct amount this loop will run.
	while(userValue < productPrice)
	{
	cout << "\n.....................................................................................................\n";
	cout << " You have to enter: " << (productPrice-userValue);
	cout << "\nPlease enter the required payment through slot \n";
	cout << "\n.....................................................................................................\n";
	cout << "Number of 10s : ";
	cin >> tens;
	storedTens += tens;
	cout << "Number of 5s : ";
	cin >> fives;
	storedFives += fives;
	cout << "Number of 2s : ";
	cin >> twos;
	storedTwos += twos;
	cout << "Number of 1s : ";
	cin >> ones;
	storedOnes += ones;
	userValue += countValues(tens, fives, twos, ones);
	cout << "\n.....................................................................................................\n";
	cout << "Entered amount: " << userValue << "  Price of the Product =  " << productPrice;
	}
	// after entering more or equal money, system will calculate the direct balance.
	balance = userValue - productPrice;
	storedAmount = countValues(storedTens, storedFives, storedTwos, storedOnes);
	cout<< "\nstored amount: " << storedAmount;
	// if the balance is not zero and if there is enough money in vender machine it will starts to calculate the balance in coins using coutCoinsMethod.
	if(canTransactionDone && storedAmount >= balance)
	{
		cout << "\nYour balance is: " << balance;
		countCoins(balance);
		if(countTens != 0)
			cout << "\nNumber of 10s: " << countTens << "\n";
		if(countFives != 0)
			cout << "\nNumber of 5s: " << countFives << "\n";
		if(countTwos != 0)
			cout << "\nNumber of 2s: " << countTwos << "\n";
		if(countOnes != 0)
			cout << "\nNumber of 1s: " << countOnes << "\n";
	}
	else if(balance == 0)
	{
		cout << "\nTransaction successful\nThank you!";
	}
	else
	{
		cout << "\nYour transaction cannot be proceed due to an internal issue\nThank you";
	}
	int pword;
	cout << "\n.....................................................................................................\n";
	cout << "Enter the password to Terminate(Authorized people only)\n";
	cout << "If you are a customer enter 0 : ";
	cin >> pword;
	cout << "\n.....................................................................................................\n";
	if(pword != 0)
	{
		// we can authorize admins and let them to terminate the process using this method.
		authorizeTheUser(pword);
	}
	else if(pword == 0)
	{
		// if the user is a customer, he can continue the same process (above process) by enttering zero.
		resetGlobalValues();
	}
	}
	return 0;
}

// use to set the product price by comparing the product number.
settingProductPrice(int num)
{
	switch(num)
	{
		case 1 :
			productPrice = 30;
			break;
		case 2:
			productPrice = 300;
			break;
		case 3:
			productPrice = 21;
			break;
		case 4:
			productPrice = 55;
			break;		
	}
}
//use to count a value in total when the inputs are in coins.
int countValues(int tens,int fives, int twos, int ones)
{
	int priceSummation = (tens*10) + (fives*5) + (twos*2) + ones ; 
	return priceSummation;
}
//use to count coins when the input is given as a total value.
countCoins(int value)
{
	int remainder = 0;
	countTens = value / 10;
	// couting number of 10 coins if available
	if(storedTens <= countTens)
	{
		cout << "remainder: " <<value;
		countTens = storedTens;
		remainder = value - (10*storedTens);
		storedTens = 0;
		cout << "remainder: " <<remainder;
	}
	else
	{
		remainder = value % 10;
		storedTens -= countTens;
	}
	countFives = remainder / 5;
	// couting number of 5 coins if available
	if(storedFives < countFives)
	{
		countFives = storedFives;
		remainder = remainder - (5*storedFives);
		storedFives = 0;
	}
	else
	{
		remainder = remainder % 5;
		storedFives -= countFives;
		
	}
	// couting number of 2 coins if available
	countTwos = remainder / 2;
	if(storedTwos < countTwos)
	{
		countTwos = storedTwos;
		remainder = remainder - (2*storedTwos);
		storedTwos = 0;
	}
	else
	{
		remainder = remainder % 2;
		storedTwos -= countTwos;
	}
	
	if(storedOnes >= remainder)
	{
		countOnes = remainder;
		storedOnes -= remainder;
	}
	else
	{		
		canTransactionDone = false;
	}
}
