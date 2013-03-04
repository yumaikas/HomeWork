/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*This program calculates a discount. 
*/
#include <iostream>
#include <string>
//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;

double getDiscount(int quantity){
    if(quantity >= 100) {
        return 0.5;
    } else if (quantity > 49) {
        return 0.4;
    } else if (quantity > 19) {
        return 0.3;
    } else if (quantity > 9) {
        return 0.2;
    } else {
        return 0.0; 
    }
}
int main(){
    int count = 0;
    cout << "How many copies of ACME(c) software did you buy? ";
    cin >> count;
    double cost = count * 99;
    double discount_rate = getDiscount(count);
    double discount = cost * discount_rate;
    if(discount > 0.0){
        cout << "You got a discount of $" << discount << endl;
        cout << "For a total of $" << (cost - discount) << endl; 
    } else {
        cout << "You  didn't get a discount." << endl << "Your total is $" << cost << endl; 
    }
    system("pause");
    return 0; 

}