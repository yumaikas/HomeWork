/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*This program calculates the factorial of a positive integer, and makes sure that the integer is valid
*/
#include <iostream>
#include <string>
//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;


int factorial(int number) {
    for (int i = number - 1; i > 0 ; i--)
    {
        number = number * i;
    }
    return number;
}

int main() {
    int input = 0;
    bool retry = true;
    while (retry)
    {
        cout << "Enter a positive integer: ";
        cin >> input;
        retry = (cin.fail() || (input <= 0));
        if(retry){
            std::cin.clear(); 
            while(std::cin.get()!= '\n') 
            continue;
        }
    }
    
    cout << "The factorial of that integer is "<<factorial(input) << endl; 
    system("pause");
    
    return 0;
}

