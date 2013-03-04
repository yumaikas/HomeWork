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

int pointsAwarded(int num_books){
    if (num_books > 3){
        return 60;
    }
    if (num_books > 2){
        return 30;
    }
    if (num_books > 1){
        return 15;
    }
    if (num_books > 0){
        return 5;
    }
    return 0;
}

int main(){
    int num_books = 0;
    cout << "How many books did you purchase this month? ";
    cin >> num_books;
    cout << "You were awarded " << pointsAwarded(num_books) << " points this month.";
    system("pause");
    return 0; 
} 