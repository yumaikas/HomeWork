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
    for (int i = 0; i < 21; i++)
    {
        double c = i;
        double f = ((9.0/5.0)*c + 32);
        cout << c << "C ->\t" << f << "F" << endl;
    }    
    system("pause"); 
}
