/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*Prints a table of Celcius to fahreneit conversions
*/
#include <iostream>
#include <string>
//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main(){
    int hours;
    int speed;
    cout << "How many hours did you drive? ";
    cin >> hours;
    cout << "How fast did you drive over that time? ";
    cin >> speed;
    int distance = 0;
    cout << "Hour\tDistance" << endl;
    cout << string(20,'-') << endl;
    for (int h = 1; h <= hours; h++){
        distance += speed;
        
        cout << h << "\t" << distance << endl;
    }    
    system("pause"); 
}
