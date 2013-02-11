/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*This program displays the sales tax from a purchase amount given
*/


#include <iostream>
#include <stdlib.h>

//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;
const double STATE_TAX = 0.04;
const double COUNTY_TAX = 0.02;

double getPurchase(){
	//Get the input
	double purchase_amount; 
	cout << "How much did you spend? ";
	cin >> purchase_amount; 
	return purchase_amount
}

int main() {
	
	//Calculate the tax totals
	double state_tax = purchase_amount * 0.04;
	double county_tax = purchase_amount * 0.02;
	double total_tax = state_tax + county_tax;
	
	//Output the result of paying taxes
	//(the taxes seem low, by the way)
	cout << "You made a purchase of $" << purchase_amount << "." << endl;
	cout << "The state sales tax is $" << state_tax << endl;
	cout << "The county sales tax is $" << county_tax << endl; 
	//By leaving off the endl we can continue the line on the next code line
	cout << "After adding a sum of $" << total_tax << " in taxes, ";
	cout << "your total bill is $" << total_tax + purchase_amount << "." << endl; 
	
	//Wait to keep the program from terminating before we can see the result.
	system("pause");
	return 0;
}
