/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*This program converts Celcius tempuratures into Farenheit and displays the result. 
*/

#include <iostream>

//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;

int main () {

	double celcius;
	cout << "What Celcius tempurature do you have? ";
	cin >> celcius;
	//Using double literals to make sure that all the calculations are performed with high precision
	double farenheit = (((9.0 / 5.0) * celcius) + 32.0);
	cout << "The tempurature is " << farenheit << " degrees Farenheit" << endl; 
	system("pause");
	return 0;
}