#include <iostream>
#include <iomanip>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main (){
	int quantity = 0;
	double price = 0.0;
	double discout = 0.0;
	double total = 0.0;
	double tax_rate = 0.06;

	cout << "Price: ";
	cin >> price;
	cout << "Quantity: ";
	cin >> quantity;

	total = price * quantity;
	
	if (quantity > 5){
		discout = total * .1;
		total -= discout;		
	}
	double tax_amount = total * tax_rate;
	total += tax_amount;
	cout << fixed << setprecision(5);
	cout << "Total owed: $" << total << endl;
	
	system("pause");
}